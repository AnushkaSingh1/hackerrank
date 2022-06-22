vector<int> breakingRecords(vector<int> scores) {
    assert(scores.size());
    int min =scores[0], max=scores[0];
    int min_broken = 0, max_broken = 0;
    for(auto sitr = std::next(scores.begin()); sitr != scores.end(); ++sitr){
        auto score =*sitr;
        min = (score < min ? ++min_broken, score:min);
        max = (score > max ? ++max_broken, score:max);
    }
    return {max_broken, min_broken};
}







vector<int> breakingRecords(vector<int> &scores) 
{
    vector<int> result{0, 0};
    
    if (scores.size() < 2)
        return result;
        
    int min = scores[0];
    int max = scores[0];
    
    for (size_t i = 1; i < scores.size(); ++i)
    {
        if(scores[i] < min)
        {
            min = scores[i];
            ++result[1];
        }
        else if(scores[i] > max)
        {
            max = scores[i];
            ++result[0];
        }
    }
    
    return result;
}







Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Example
scores=[12,24,10,24]

Scores are in the same order as the games played. She tabulates her results as follows:

                                     Count
    Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.

Function Description

Complete the breakingRecords function in the editor below.

breakingRecords has the following parameter(s):

int scores[n]: points scored per game
Returns

int[2]: An array with the numbers of times she broke her records. Index 0 is for breaking most points records, and index 1 is for breaking least points records.
