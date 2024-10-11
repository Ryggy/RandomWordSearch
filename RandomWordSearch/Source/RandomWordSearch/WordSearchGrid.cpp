// © 2024 Ryan Williamson. All Rights Reserved.
#include "WordSearchGrid.h"
#include "Math/UnrealMathUtility.h" // For FMath::RandRange

void UWordSearchGrid::InitialiseGrid(int32 InRows, int32 InColumns)
{
	Rows = InRows;
	Columns = InColumns;
	Grid.SetNum(Rows);
	for (auto& Row : Grid)
	{
		Row.SetNum(Columns);
	}
}

void UWordSearchGrid::PopulateGrid(TArray<FString> WordsToPlace)
{
	// Logic to populate the grid with random letters and place words

	// Clear the grid before populating
	for (auto& Row : Grid)
	{
		for (auto& Cell : Row)
		{
			Cell = TEXT(""); // Clear the cell
		}
	}

	// Place each word in the grid
	for (const FString& Word : WordsToPlace)
	{
		PlaceWord(Word);
	}

	// Fill remaining empty spaces with random letters
	RandomiseLetters();
}


bool UWordSearchGrid::FindWord(const FString& Word)
{
	// Implement search logic in all directions
	return false; // Placeholder
}

bool UWordSearchGrid::PlaceWord(const FString& Word)
{
	// Choose a random direction
	int32 Direction = FMath::RandRange(0, 7); // 0-7 for 8 possible directions

	// Determine the direction vectors
	int32 DirRow = 0;
	int32 DirCol = 0;

	switch (Direction)
	{
	case 0: DirRow = 0; DirCol = 1; break; // Right
	case 1: DirRow = 1; DirCol = 0; break; // Down
	case 2: DirRow = 1; DirCol = 1; break; // Down-Right
	case 3: DirRow = 0; DirCol = -1; break; // Left
	case 4: DirRow = -1; DirCol = 0; break; // Up
	case 5: DirRow = -1; DirCol = -1; break; // Up-Left
	case 6: DirRow = 1; DirCol = -1; break; // Down-Left
	case 7: DirRow = -1; DirCol = 1; break; // Up-Right
	}

	// Choose a random starting position
	int32 Row = FMath::RandRange(0, Rows - 1);
	int32 Col = FMath::RandRange(0, Columns - 1);

	// Check if the word can be placed
	if (CanPlaceWord(Word, Row, Col, DirRow, DirCol))
	{
		// Place the word in the grid
		for (int32 i = 0; i < Word.Len(); i++)
		{
			Grid[Row + i * DirRow][Col + i * DirCol] = FString(1, &Word[i]);
		}
		return true; // Successfully placed the word
	}

	return false; // Failed to place the word
}

bool UWordSearchGrid::CanPlaceWord(const FString& Word, int32 Row, int32 Col, int32 DirRow, int32 DirCol)
{
	for (int32 i = 0; i < Word.Len(); i++)
	{
		int32 NewRow = Row + i * DirRow;
		int32 NewCol = Col + i * DirCol;

		// Check boundaries
		if (NewRow < 0 || NewRow >= Rows || NewCol < 0 || NewCol >= Columns)
		{
			return false; // Out of bounds
		}

		// Check if the grid cell is empty or already has the same letter
		if (Grid[NewRow][NewCol] != TEXT("") && Grid[NewRow][NewCol] != FString(1, &Word[i]))
		{
			return false; // Cannot place the word
		}
	}
	return true; // Can place the word
}

void UWordSearchGrid::RandomiseLetters()
{
    for (int32 Row = 0; Row < Rows; Row++)
    {
        for (int32 Col = 0; Col < Columns; Col++)
        {
            if (Grid[Row][Col] == TEXT("")) // If the cell is empty
            {
                // Fill with a random letter (A-Z)
                Grid[Row][Col] =  GetRandomLetterWithWeight();
            }
        }
    }
}

FString UWordSearchGrid::GetRandomLetterWithWeight()
{
	// Calculate the total weight
	int32 TotalWeight = 0;
	for (int32 Weight : CharacterWeights)
	{
		TotalWeight += Weight;
	}

	// Get a random number within the total weight
	int32 RandomNumber = FMath::RandRange(0, TotalWeight - 1);

	// Determine which letter corresponds to the random number
	int32 AccumulatedWeight = 0;
	for (int32 i = 0; i < CharacterWeights.Num(); ++i)
	{
		AccumulatedWeight += CharacterWeights[i];
		if (RandomNumber < AccumulatedWeight)
		{
			return FString(1, &AlphabetCharacters[i]); // Return the letter
		}
	}

	// Fallback (should not reach here)
	return TEXT("");
}

void UWordSearchGrid::LogGrid()
{
	if (Grid.Num() == 0) // Check if the grid is empty
	{
		UE_LOG(LogTemp, Warning, TEXT("The grid is empty."));
		return;
	}

	// Iterate through each row
	for (int32 Row = 0; Row < Grid.Num(); ++Row)
	{
		FString RowString = TEXT(""); // Initialize an empty string to build the row output
		for (int32 Col = 0; Col < Grid[Row].Num(); ++Col)
		{
			RowString += Grid[Row][Col] + TEXT(" "); // Append each letter followed by a space
		}

		// Log the row to the output log
		UE_LOG(LogTemp, Log, TEXT("Row %d: %s"), Row, *RowString);
	}
}

