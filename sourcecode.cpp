//Isaac Opata
#include <iostream>           // Include the standard input/output stream library
#include "TestScores.h"       // Include the header file for the TestScores class
#include "NegativeScore.h"    // Include the header file for the NegativeScore exception

using namespace std;          // Use the standard namespace

const int NUM_SCORES = 5;     // Define a constant for the number of test scores

int main()
{
    try
    {
        // Define an array of test scores
        int yourScores[NUM_SCORES] = { 78, 88, 99, 67, 91 };

        // Create a TestScores object using the array of scores
        TestScores yourTestScores(yourScores, NUM_SCORES);

        // Output the average of the test scores
        cout << "Average is " << yourTestScores.getAverage() << endl;

        // Define another array of test scores with a negative value
        int badScores[NUM_SCORES] = { 78, 88, -99, 67, 91 };

        // Attempt to create a TestScores object with the invalid scores
        TestScores badTestScores(badScores, NUM_SCORES);

        // This line will not be executed if an exception is thrown
        cout << "Average is " << badTestScores.getAverage() << endl;
    }
    catch (NegativeScore y)    // Catch any NegativeScore exceptions thrown
    {
        // Output the invalid score
        cout << "Invalid test score was found: " << y.getScore() << endl;
    }

    return 0;   // Return 0 to indicate successful execution
}
