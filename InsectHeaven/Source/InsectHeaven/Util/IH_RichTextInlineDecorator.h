#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "IH_RichTextInlineDecorator.generated.h"

UCLASS()
class UIH_RichTextInlineDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()
	
public:
	UIH_RichTextInlineDecorator(const FObjectInitializer& _ObjectInitializer);

	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;
};
