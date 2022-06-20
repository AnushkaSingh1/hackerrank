void miniMaxSum(vector<int> arr) {
    int64_t max{arr[0]}, mini{arr[0]}, sum{arr[0]};
    
    for(size_t i{1}; i < arr.size(); ++i){
        sum += arr[i];
        
        if (arr[i] > max) max = arr[i];
        else if (arr[i] < mini) mini = arr[i];
    }
    
    std::cout << sum - max << " " << sum - mini << std::endl;
}







void miniMaxSum(vector<int> arr) {
    long max=0,min=0;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        min+=arr[i];
    }
    for(int i=1;i<n;i++)
    {
        max+=arr[i];
    }
    cout<<min<<" "<<max;
}







void miniMaxSum(vector<int> arr) 
{
    int len = arr.size(), mini = 1000000000, maxi = 0;
    long long sum  = 0;
    
    for(int i = 0; i < len; i++)
    {
        sum += arr[i];
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    
    cout << sum - maxi << " " << sum - mini;
  
}









Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example
arr=[1,3,5,7,9]
The minimum sum is 1+3 5 7 =16 and the maximum sum is 3 5 7 9=24  . The function prints

16 24
Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

arr: an array of 5 integers
Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.

Input Format

A single line of five space-separated integers.

Constraints
1_<arr[i]_<10^9

Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
