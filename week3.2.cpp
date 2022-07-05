int birthday(vector<int> s, int d, int m) {
    vector<int> memory;
    int result = 0;
    memory.reserve(s.size()-m+1);
    
    // create a sum window of m elements
    for(int i=0; i<m; i++)
        result += s[i];
        
    memory.push_back(result);
    for(int i=1; i<s.size()-m+1; i++)
        memory.push_back(memory[i-1] - s[i-1] + s[i+m-1]);
        
    //  simply count the memory
    result = 0;
    for(auto &i: memory)
        if(i == d)  result ++;
    return result;
    
}










int birthday(vector<int> s, int d, int m) {
    if (m < 1 || m > 12 || d < 1 || d > 31) return 0;
    int i = 0, sum = 0, count = 0;
    while (i < s.size()) {
        sum += s[i];
        if (i >= m - 1) {
            if (i >= m) sum -= s[i - m];
            if (sum == d) count++;
        }
        i++;
    }
    return count;
}












Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.

Example



Lily wants to find segments summing to Ron's birth day,  with a length equalling his birth month, . In this case, there are two segments meeting her criteria:  and .

Function Description

Complete the birthday function in the editor below.

birthday has the following parameter(s):

int s[n]: the numbers on each of the squares of chocolate
int d: Ron's birth day
int m: Ron's birth month
Returns

int: the number of ways the bar can be divided
Input Format

The first line contains an integer , the number of squares in the chocolate bar.
The second line contains  space-separated integers , the numbers on the chocolate squares where .
The third line contains two space-separated integers,  and , Ron's birth day and his birth month.
