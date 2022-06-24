int divisibleSumPairs(int n, int k, vector<int> ar) {
    unordered_map<int, int> um;
    int ans = 0;

    for(int i = 0; i < ar.size(); i++) {
    int remainder = ar[i] % k;
    int diff = k - remainder;
    if (diff == k) {
      diff = 0;
    }
    
    ans += um[diff];
    um[remainder]++;
  }

  return ans;
}







Given an array of integers and a positive integer k, determine the number of (i,j) pairs where (i<j)  and ar[i] + ar[j] is divisible by k .

Example



Three pairs meet the criteria:  and .

Function Description

Complete the divisibleSumPairs function in the editor below.

divisibleSumPairs has the following parameter(s):

int n: the length of array ar
int ar[n]: an array of integers
int k: the integer divisor
Returns
- int: the number of pairs

Input Format

The first line contains 2 space-separated integers, n and k.
The second line contains n space-separated integers, each a value of arr[i].

Constraints

Sample Input

STDIN           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]
Sample Output

 5
Explanation

Here are the 5 valid pairs when k=3:

