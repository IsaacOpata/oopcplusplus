#ifndef TEST_SCORES_H
#define TEST_SCORES_H

#include <iostream>
using namespace std;

// Class definition for TestScores
class TestScores
{
private:
    int numScores;   // Number of test scores
    int* scores;     // Pointer to dynamically allocated array of scores

public:
    // Default constructor
    TestScores()
    {
        numScores = 0;
        scores = nullptr;
    }

    // Constructor that initializes the scores array and checks for negative scores
    TestScores(int[], int);

    // Function to calculate and return the average of the test scores
    double getAverage() const;
};

#endif


