#include "NegativeScore.h"
#include "TestScores.h"

// Constructor for the TestScores class
// Initializes the scores array and checks for negative scores
TestScores::TestScores(int scoreArray[], int size)
{
    numScores = size;        // Set the number of scores
    scores = new int[size];  // Allocate memory for the scores array

    for (int i = 0; i < size; i++)
    {
        // Check if the score is negative
        if (scoreArray[i] < 0)
            throw NegativeScore(scoreArray[i]);  // Throw exception for negative score
        else
            scores[i] = scoreArray[i];  // Copy the score to the scores array
    }
}

// Method to calculate the average of the test scores
double TestScores::getAverage() const
{
    int total = 0;  // Variable to hold the sum of scores

    // Sum all the scores
    for (int j = 0; j < numScores; j++)
        total += scores[j];

    // Return the average as a double
    return static_cast<double>(total) / numScores;
}
