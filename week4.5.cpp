int minimumAbsoluteDifference(vector<int> arr) {
    int mindiff = INT_MAX;
    
    sort(arr.begin() , arr.end());
    
    for(int i = 0;i<arr.size() -1;++i)
    {
        if(arr[i+1] - arr[i] < mindiff)
            mindiff = arr[i+1] - arr[i];
    }
    
    return mindiff;
}














The absolute difference is the positive difference between two values  and , is written  or  and they are equal. If  and , . Given an array of integers, find the minimum absolute difference between any two elements in the array.

Example. 

There are  pairs of numbers:  and . The absolute differences for these pairs are ,  and . The minimum absolute difference is .

Function Description

Complete the minimumAbsoluteDifference function in the editor below. It should return an integer that represents the minimum absolute difference between any pair of elements.

minimumAbsoluteDifference has the following parameter(s):

int arr[n]: an array of integers
Returns

int: the minimum absolute difference found
Input Format

The first line contains a single integer , the size of .
The second line contains  space-separated integers, .

Constraints

Language
C++

More
1011121314151617181920212223242526272829
    for(int i = 0;i<arr.size() -1;++i)
    {
        if(arr[i+1] - arr[i] < mindiff)
            mindiff = arr[i+1] - arr[i];
    }
    
    return mindiff;
}

int main()

Line: 28 Col: 2

Submit Code

Run Code

Upload Code as File

Test against custom input
Congratulations
You solved this challenge. Would you like to challenge your friends?Share on FacebookShare on TwitterShare on LinkedIn
Next Challenge

Test case 0

Test case 1

Test case 2

Test case 3

Test case 4

Test case 5

Test case 6

Test case 7

Test case 8

Test case 9

Test case 10
Compiler Message
Success
Input (stdin)

Download
3
3 -7 0
Expected Output

Download
3
BlogScoringEnvironment
