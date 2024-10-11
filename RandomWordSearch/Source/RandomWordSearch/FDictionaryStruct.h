#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" // For UDataTable
#include "FDictionaryStruct.generated.h"

USTRUCT(BlueprintType)
struct FDictionaryStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Word; // This will hold the word from the CSV
};
