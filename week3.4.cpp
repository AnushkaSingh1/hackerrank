int migratoryBirds(vector<int> arr) {
    std::map<int,int> myMap;
    
    for (int i = 0; i < arr.size(); i++)
        myMap.insert(pair<int,int>(arr[i], 0));
        
    int currentMax = 0;
    int maxNum = 0;
        
    for (pair<int,int> i : myMap) {
        int count = std::count_if(arr.begin(), arr.end(), [i](int x){return x == i.first;});
        i.second = count;
        if (i.second > currentMax) {
            currentMax = i.second;
            maxNum = i.first;
        }
    }
    return maxNum;
}



















Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

Example

There are two each of types  and , and one sighting of type . Pick the lower of the two types seen twice: type .

Function Description

Complete the migratoryBirds function in the editor below.

migratoryBirds has the following parameter(s):

int arr[n]: the types of birds sighted
Returns

int: the lowest type id of the most frequently sighted birds
Input Format

The first line contains an integer, , the size of .
The second line describes  as  space-separated integers, each a type number of the bird sighted.

Constraints

It is guaranteed that each type is , , , , or .
