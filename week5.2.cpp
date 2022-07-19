int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int num = 1, spec = 1, low=1, cap=1, rest = 2;
    string special_characters = "!@#$%^&*()-+";
    for(int i =0; i < password.size() ; i++) {
        if(num!=0 && password[i] >='0' && password[i]<='9')
            num--;
        else if(low!=0 && password[i]>='a' && password[i]<='z') 
            low--;
        
        else if(cap!= 0 && password[i]>='A' && password[i]<='Z')
            cap--;       
        
        else if(spec!=0 && special_characters.find(password[i]) != special_characters.npos) 
            spec--;
        
        else if(rest !=0) 
            rest--;
        
        else if(num==cap==spec==rest==0)    
            break;
    }
    return num+spec+low+cap+rest;
}

















Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
Example


This password is 5 characters long and is missing an uppercase and a special character. The minimum number of characters to add is .


This password is 5 characters long and has at least one of each character type. The minimum number of characters to add is .

Function Description

Complete the minimumNumber function in the editor below.

minimumNumber has the following parameters:

int n: the length of the password
string password: the password to test
Returns

int: the minimum number of characters to add
Input Format

The first line contains an integer , the length of the password.

The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

All characters in  are in [a-z], [A-Z], [0-9]
