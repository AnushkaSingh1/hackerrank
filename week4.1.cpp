int pickingNumbers(vector<int> a) {
    vector<int> counter(100);
    
    for(int i=0;i<a.size();i++){
        counter[a[i]-1]++;
    }
    int max = 0;
    int cur_sum;
    for(int i=0;i<counter.size()-1;i++){
        cur_sum = counter[i] + counter[i+1];
        if(cur_sum > max){
            max = cur_sum;
        }
    }
    return max;
}



















Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to .

Example


There are two subarrays meeting the criterion:  and . The maximum length subarray has  elements.

Function Description

Complete the pickingNumbers function in the editor below.

pickingNumbers has the following parameter(s):

int a[n]: an array of integers
Returns

int: the length of the longest subarray that meets the criterion
Input Format

The first line contains a single integer , the size of the array .
The second line contains  space-separated integers, each an .

Constraints

The answer will be .
