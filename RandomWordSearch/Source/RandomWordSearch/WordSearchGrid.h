// © 2024 Ryan Williamson. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "WordSearchGrid.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RANDOMWORDSEARCH_API UWordSearchGrid : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void InitialiseGrid(int32 Rows, int32 Columns);

	UFUNCTION(BlueprintCallable)
	void PopulateGrid(TArray<FString> WordsToPlace);

	UFUNCTION(BlueprintCallable)
	bool FindWord(const FString& Word);

	void LogGrid();
	
private:
	TArray<TArray<FString>> Grid;
	int32 Rows;
	int32 Columns;

	const FString AlphabetCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const TArray<int32> CharacterWeights = {8, 1, 3, 4, 12, 2, 2, 6, 7, 2, 5, 4, 7, 6, 8, 2, 1, 6, 6, 9, 2, 1, 2, 1, 2, 1}; // Example weights for A-Z

	bool PlaceWord(const FString& Word);
	bool CanPlaceWord(const FString& Word, int32 Row, int32 Col, int32 DirRow, int32 DirCol);
	void RandomiseLetters();
	FString GetRandomLetterWithWeight();
};
