vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> returns;
    map<string, int> m;
    for(vector<string>::iterator i = strings.begin(); i != strings.end(); i++){ 
        if(m.find(*i) == m.end()){
            m[*i] = 1;
        }
        else{
            m.at(*i) += 1;
        }
    }
    for(vector<string>::iterator i = queries.begin(); i != queries.end(); i++){
        if(m.find(*i) != m.end()){
            returns.push_back(m.at(*i));
            continue;
        }
        returns.push_back(0);
			
    }
    return returns;
}







vector<int> matchingStrings(vector<string> strings, vector<string> queries) 
{
    vector<int> output;
    unordered_map<string, int> data;
    for(auto str : strings)
    {
        //Initializes new strings as 1 and increments existing strings
        data[str] += 1; 
    }
    
    for(auto query : queries)
    {
        output.push_back(data[query]);
    }
    
    return output;
}










There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. 
  Return an array of the results.

Example
strings= [ab, ab , abc]
queries =[ab, abc, bc]


There are  instances of 2',  of 'ab' and 1 of 'abc', 0 of bc. For each query, add an element to the return array, results =[ 2,1, 0].

Function Description

Complete the function matchingStrings in the editor below. The function must return an array of integers representing the frequency of occurrence of each 
query string in strings.

matchingStrings has the following parameters:

string strings[n] - an array of strings to search
string queries[q] - an array of query strings
Returns

int[q]: an array of results for each query
Input Format

The first line contains and integer , the size of .
Each of the next  lines contains a string .
The next line contains , the size of .
Each of the next  lines contains a string .

Constraints



 .

Sample Input 1

CopyDownload
4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output 1

2
1
0

Sample Input 2

CopyDownload
3
def
de
fgh
3
de
lmn
fgh
Sample Output 2

1
0
1

Sample Input 3

CopyDownload
13
abcde
sdaklfj
asdjf
na
basdn
sdaklfj
asdjf
na
asdjf
na
basdn
sdaklfj
asdjf
5
abcde
sdaklfj
asdjf
na
basdn
Sample Output 3

1
3
4
3
2
