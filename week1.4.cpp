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
