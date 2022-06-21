string timeConversion(string s) {
    
    // Get hour
    int hh = ((s[0]-'0') * 10) + (s[1]-'0');
    
    // If hour is 12, convert to 0
    if (hh == 12) {
        hh = 0;
    }
    
    // If the format is PM, add 12 hours
    if (s[8] == 'P') {
        hh += 12;
    }
    
    // Change the hours in <s> to the current hour
    s[0] = (char)((hh/10) + '0');
    s[1] = (char)((hh%10) + '0');
    
    // Remove last two characters (PM or AM)
    s.pop_back(); s.pop_back();
    
    return s;
}







string timeConversion(string s) {
    string num = s.substr(0, 2);
    string ampm = s.substr(8, 2);
    
    if (ampm == "AM" && num == "12"){
            num = "00";
    }
    if(ampm == "PM" && num != "12"){
        num = to_string(stoi(num) + 12);
    }
    
    return num + s.substr(2, 6);
}







Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

s='12:01:00pm'

Return '12:01:00'.

    s='12:01:00am'

Return '00:01:00'.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in 12 hour format
Returns

string: the time in 24 hour format
Input Format

A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints

All input times are valid
Sample Input

07:05:45PM
Sample Output

19:05:45
