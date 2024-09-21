#include "IH_RichTextInlineDecorator.h"

#include "Components/RichTextBlock.h"
#include "Framework/Text/SlateTextRun.h"


class FDefaultRichTextDecorator : public ITextDecorator
{
public :
	FDefaultRichTextDecorator(URichTextBlockDecorator* _Decorator, const FSlateFontInfo& _DefaultFont, const FLinearColor& _DefaultColor);

	virtual ~FDefaultRichTextDecorator();

	virtual bool Supports(const FTextRunParseResults& RunInfo, const FString& Text) const override;

	virtual TSharedRef<ISlateRun> Create(const TSharedRef<FTextLayout>& TextLayout, const FTextRunParseResults& RunInfo, const FString& OriginalText, const TSharedRef<FString>& ModelText, const ISlateStyle* Style) override;

protected:

	virtual TSharedRef<ISlateRun> CreateRun(const TSharedRef<FTextLayout>& _TextLayout, const FRunInfo& _InRunInfo, const TSharedRef<const FString>& _InText, const FTextBlockStyle& _Style, const FTextRange& _InRange);

	FTextBlockStyle CreateTextBlockStyle(const FRunInfo& _InRunInfo) const;

	void ExplodeRunInfo(const FRunInfo& _InRunInfo, FSlateFontInfo& _OutFont, FLinearColor& _OutFontColor) const;

protected:
	FSlateFontInfo DefaultFont;
	FLinearColor DefaultColor;

private:
	TWeakObjectPtr<URichTextBlockDecorator> Decorator;
};

class FDefaultRichTextRun : public FSlateTextRun
{
public:
	FDefaultRichTextRun(URichTextBlockDecorator* _InDecorator, const TSharedRef<FTextLayout>& _InTextLayout, const FRunInfo& _InRunInfo, const TSharedRef<const FString>& _InText, const FTextBlockStyle& _InStyle, const FTextRange& _InRange)
		: FSlateTextRun(_InRunInfo, _InText, _InStyle, _InRange)
		, TextLayout(_InTextLayout)
		, Decorator(_InDecorator)
	{
	}

	virtual int32 OnPaint(const FPaintArgs& _Args, const FTextLayout::FLineView& _Line, const TSharedRef<ILayoutBlock>& _Block, const FTextBlockStyle& _DefaultStyle, const FGeometry& _AllocatedGeometry, const FSlateRect& _ClippingRect
		, FSlateWindowElementList& _OutDrawElements, int32 _LayerID, const FWidgetStyle& _InWidgetStyle, bool _bParentEnabled) const override
	{
		FSlateTextRun::OnPaint(_Args, _Line, _Block, _DefaultStyle, _AllocatedGeometry, _ClippingRect, _OutDrawElements, _LayerID, _InWidgetStyle, _bParentEnabled);

		return _LayerID;
	}

private:
	const TSharedRef<FTextLayout> TextLayout;
	TWeakObjectPtr<URichTextBlockDecorator> Decorator;
};

FDefaultRichTextDecorator::FDefaultRichTextDecorator(URichTextBlockDecorator* InDecorator, const FSlateFontInfo& InDefaultFont, const FLinearColor& InDefaultColor)
	: DefaultFont(InDefaultFont)
	, DefaultColor(InDefaultColor)
	, Decorator(InDecorator)
{
}

FDefaultRichTextDecorator::~FDefaultRichTextDecorator()
{
}

bool FDefaultRichTextDecorator::Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const
{
	return (RunParseResult.Name == TEXT("IH"));
}

TSharedRef<ISlateRun> FDefaultRichTextDecorator::Create(const TSharedRef<FTextLayout>& TextLayout, const FTextRunParseResults& RunParseResult, const FString& OriginalText, const TSharedRef<FString>& InOutModelText, const ISlateStyle* Style)
{
	FRunInfo RunInfo(RunParseResult.Name);
	for (const TPair<FString, FTextRange>& Pair : RunParseResult.MetaData)
	{
		RunInfo.MetaData.Add(Pair.Key, OriginalText.Mid(Pair.Value.BeginIndex, Pair.Value.EndIndex - Pair.Value.BeginIndex));
	}

	FTextRange ModelRange;
	ModelRange.BeginIndex = InOutModelText->Len();
	*InOutModelText += OriginalText.Mid(RunParseResult.ContentRange.BeginIndex, RunParseResult.ContentRange.EndIndex - RunParseResult.ContentRange.BeginIndex);
	ModelRange.EndIndex = InOutModelText->Len();

	return CreateRun(TextLayout, RunInfo, InOutModelText, CreateTextBlockStyle(RunInfo), ModelRange);
}

TSharedRef<ISlateRun> FDefaultRichTextDecorator::CreateRun(const TSharedRef<FTextLayout>& TextLayout, const FRunInfo& InRunInfo, const TSharedRef< const FString >& InText, const FTextBlockStyle& Style, const FTextRange& InRange)
{
	return MakeShareable(new FDefaultRichTextRun(Decorator.Get(), TextLayout, InRunInfo, InText, Style, InRange));
}

FTextBlockStyle FDefaultRichTextDecorator::CreateTextBlockStyle(const FRunInfo& InRunInfo) const
{
	FSlateFontInfo Font;
	FLinearColor FontColor;
	ExplodeRunInfo(InRunInfo, Font, FontColor);

	FTextBlockStyle TextBlockStyle;
	TextBlockStyle.SetFont(Font);
	TextBlockStyle.SetColorAndOpacity(FontColor);

	return TextBlockStyle;
}

void FDefaultRichTextDecorator::ExplodeRunInfo(const FRunInfo& InRunInfo, FSlateFontInfo& OutFont, FLinearColor& OutFontColor) const
{
	OutFont = DefaultFont;

	const FString* const FontFamilyString = InRunInfo.MetaData.Find(TEXT("font"));
	const FString* const FontSizeString = InRunInfo.MetaData.Find(TEXT("size"));
	const FString* const FontStyleString = InRunInfo.MetaData.Find(TEXT("style"));
	const FString* const FontColorString = InRunInfo.MetaData.Find(TEXT("color"));

	if (FontFamilyString)
	{
		FSoftObjectPath Font(**FontFamilyString);
		if (UObject* FontAsset = Font.TryLoad())
		{
			OutFont.FontObject = FontAsset;
		}
	}

	if (FontSizeString)
	{
		OutFont.Size = static_cast<uint8>(FPlatformString::Atoi(**FontSizeString));
	}

	if (FontStyleString)
	{
		OutFont.TypefaceFontName = FName(**FontStyleString);
	}

	OutFontColor = DefaultColor;
	if (FontColorString)
	{
		const FString& FontColorStringRef = *FontColorString;

		// Is Hex color?
		if (!FontColorStringRef.IsEmpty() && FontColorStringRef[0] == TCHAR('#'))
		{
			OutFontColor = FLinearColor(FColor::FromHex(FontColorStringRef));
		}
		else if (OutFontColor.InitFromString(*FontColorString))
		{
			// Initialized
		}
		else
		{
			OutFontColor = DefaultColor;
		}
	}
}

UIH_RichTextInlineDecorator::UIH_RichTextInlineDecorator(const FObjectInitializer& _ObjectInitializer)
	: Super(_ObjectInitializer)
{
}

TSharedPtr<ITextDecorator> UIH_RichTextInlineDecorator::CreateDecorator(URichTextBlock* _InOwner)
{
	FSlateFontInfo DefaultFont = _InOwner->GetCurrentDefaultTextStyle().Font;
	FLinearColor DefaultColor = _InOwner->GetCurrentDefaultTextStyle().ColorAndOpacity.GetSpecifiedColor();
	return MakeShareable(new FDefaultRichTextDecorator(this, DefaultFont, DefaultColor));
}
