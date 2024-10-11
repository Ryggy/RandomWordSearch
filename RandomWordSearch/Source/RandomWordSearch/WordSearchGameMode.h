// © 2024 Ryan Williamson. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WordSearchGrid.h"
#include "WordSearchGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMWORDSEARCH_API AWordSearchGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AWordSearchGameMode();

protected:
	virtual void BeginPlay() override;

private:
	UWordSearchGrid* WordSearchGrid; // Instance of WordSearchGrid
	UDataTable* WordDataTable; // Pointer to data table
	
	TArray<FString> Dictionary;
	TArray<TArray<FString>> WordGrid;

	void LoadDictionary();
	bool IsWordValid(const FString& Word);
	void GenerateRandomGrid(int32 Rows, int32 Columns);
};
