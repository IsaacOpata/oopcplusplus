#ifndef NEGATIVE_SCORE_H
#define NEGATIVE_SCORE_H

// Class definition for NegativeScore
class NegativeScore
{
private:
    int score;  // Variable to store the negative score

public:
    // Constructor that initializes the score with the given value
    NegativeScore(int s)
    {
        score = s;
    }

    // Function to retrieve the stored negative score
    int getScore() const
    {
        return score;
    }
};

#endif
