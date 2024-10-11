// © 2024 Ryan Williamson. All Rights Reserved.
#include "WordSearchGameMode.h"
#include "Engine/DataTable.h"
#include "FDictionaryStruct.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"

AWordSearchGameMode::AWordSearchGameMode()
{
}

void AWordSearchGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadDictionary();

	// Check if the dictionary has words
	if (Dictionary.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dictionary is empty!"));
		return;
	}
	
	// Create an instance of WordSearchGrid
	WordSearchGrid = NewObject<UWordSearchGrid>();

	// Call to generate a grid of size 10x10 (or any size you desire)
	WordSearchGrid->InitialiseGrid(10, 10);

	// Populate the grid with our dictionary
	WordSearchGrid->PopulateGrid(Dictionary);

	WordSearchGrid->LogGrid();
}

void AWordSearchGameMode::LoadDictionary()
{
	// Use FSoftObjectPath to refer to the DataTable asset
	FSoftObjectPath DataTablePath(TEXT("/Game/RandomWordSearch/Core/Dictionary.Dictionary"));
	// Attempt to load the DataTable from the given path
	WordDataTable = Cast<UDataTable>(DataTablePath.TryLoad());
	
	// Proceed if the DataTable was found
	if (WordDataTable)
	{
		static const FString ContextString(TEXT("Loading Words for Word Search"));
		TArray<FDictionaryStruct*> AllWords; // Declare an array to hold the retrieved rows
		WordDataTable->GetAllRows<FDictionaryStruct>(ContextString, AllWords); // Call GetAllRows with the OUT parameter

		for (FDictionaryStruct* Row : AllWords)
		{
			if (Row)
			{
				Dictionary.Add(Row->Word);
				UE_LOG(LogTemp, Log, TEXT("Word: %s"), *Row->Word); // Log each word
				
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not load the DataTable."));
	}
}

bool AWordSearchGameMode::IsWordValid(const FString& Word)
{
	return Dictionary.Contains(Word);
}

void AWordSearchGameMode::GenerateRandomGrid(int32 Rows, int32 Columns)
{
	if (WordSearchGrid)
	{
		WordSearchGrid->InitialiseGrid(Rows, Columns); // Call the method in WordSearchGrid
	}
}
