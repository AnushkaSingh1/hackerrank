#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    auto n = 0;
    std::cin >> n;
    std::vector<int> arr(n, 0);
    for(int i = 0; i < n; ++ i)
        std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());
    std::cout << arr[n / 2] << std::endl;
    
    return 0;
}











The median of a list of numbers is essentially its middle element after sorting. The same number of elements occur after it as before.
  Given a list of numbers with an odd number of elements, find the median?

Example
arr= [5,3,1,2,4]
The sorted array arr'=[1,2, 3,4, 5]. The middle element and the median is 3 .

Function Description

Complete the findMedian function in the editor below.

findMedian has the following parameter(s):

int arr[n]: an unsorted array of integers
Returns

int: the median of the array
Input Format

The first line contains the integer , the size of .
The second line contains  space-separated integers 

Constraints

 is odd
Sample Input 0

7
0 1 2 4 6 5 3
Sample Output 0

3
Explanation 0

The sorted . It's middle element is at .
