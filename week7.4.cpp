bool check(vector<int>& a) {
    set<int> s;
    for (int k = 0; k < 26; k++)
        s.insert(a[k]);
    return s.size() <= 2;
}
string isValid(string S) {
vector<int> a(26);
    for (int i = 0; i < S.length(); i++)
        a[S[i] - 'a']++;
    bool ok = check(a);
    for (int k = 0; k < 26; k++)
        if (a[k]) {
            a[k]--;
            if (check(a)) ok = true;
            a[k]++;
        }
    return (ok ? "YES" : "NO") ;
}















Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just  character at  index in the string, and the remaining characters will occur the same number of times. Given a string , determine if it is valid. If so, return YES, otherwise return NO.

Example

This is a valid string because frequencies are .


This is a valid string because we can remove one  and have  of each character in the remaining string.


This string is not valid as we can only remove  occurrence of . That leaves character frequencies of .

Function Description

Complete the isValid function in the editor below.

isValid has the following parameter(s):

string s: a string
Returns

string: either YES or NO
Input Format

A single string .

Constraints

Each character 
Sample Input

aabbcd
Sample Output

NO
Explanation

 is the minimum number of removals required to make it a valid string. It can be done in following two ways:

Remove c and d to get aabb.
Or remove a and b to get abcd.
