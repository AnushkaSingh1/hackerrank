#include <bits/stdc++.h>
using namespace std;

int month[15];

void updateLeapYear(int year) {
    if(year % 400 == 0) {
        month[2] = 29;  // There is a change here from month[2] = 28; 
    } else if(year % 100 == 0) {
        month[2] = 28;  // There is a change here from month[2] = 29; 
    } else if(year % 4 == 0) {
        month[2] = 29;
    } else {
        month[2] = 28;
    }
}

void storeMonth() {
    month[1] = 31;
    month[2] = 28;
    month[3] = 31;
    month[4] = 30;
    month[5] = 31;
    month[6] = 30;
    month[7] = 31;
    month[8] = 31;
    month[9] = 30;
    month[10] = 31;
    month[11] = 30;
    month[12] = 31;
}

int findLuckyDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    storeMonth();

    int result = 0;

    while(true) {
        int x = d1;
        x = x * 100 + m1;
        x = x * 10000 + y1; // There is a change here from x = x * 1000 + y1; 
        if(x % 4 == 0 || x % 7 == 0) {  // There is a change here x % 4 == 0 && x % 7 == 0 
            result = result + 1;
        }
        if(d1 == d2 && m1 == m2 && y1 == y2) {
            break;
        }
        updateLeapYear(y1);
        d1 = d1 + 1;
        if(d1 > month[m1]) {
            m1 = m1 + 1;
            d1 = 1;
            if(m1 > 12) {
                y1 =  y1 + 1;
                m1 = 1; // There is a change here from m1 = m1 + 1; 
            }
        }
    }
    return result;
}

int main() {
    string str;
    int d1, m1, y1, d2, m2, y2;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '-') {
            str[i] = ' ';
        }
    }
    stringstream ss;
    ss << str;
    ss >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

    int result = findLuckyDates(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
}


















In this challenge, the task is to debug the existing code to successfully execute all provided test files.

Given two dates each in the format dd-mm-yyyy, you have to find the number of lucky dates between them (inclusive). To see if a date is lucky,

Firstly, sequentially concatinate the date, month and year, into a new integer  erasing the leading zeroes.
Now if  is divisible by either  or , then we call the date a lucky date.
For example, let's take the date "02-08-2024". After concatinating the day, month and year, we get  = 2082024. As  is divisible by  so the date "02-08-2024" is called a lucky date.

Debug the given function findPrimeDates and/or other lines of code, to find the correct lucky dates from the given input.

Note: You can modify at most five lines in the given code and you cannot add or remove lines to the code.

To restore the original code, click on the icon to the right of the language selector.

Input Format

The only line of the input contains two strings  and  denoting the two dates following the format dd-mm-yyyy. Consider,  is the day number,  is the month number and  is the year number.

Note: Here  means January,  means February,  means March and so on and all the dates follow the standard structure of English calender including the leap year.

Constraints




Output Format

For each test cases, print a single integer the number of lucky dates between  and  in a single line.

Language
C++

More
5859606162636465666768697071727374757677
        }
    }
    stringstream ss;
    ss << str;
    ss >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

    int result = findLuckyDates(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
}
Line: 77 Col: 2

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

Test case 11

Test case 12

Test case 13

Test case 14

Test case 15

Test case 16

Test case 17

Test case 18

Test case 19

Test case 20

Test case 21

Test case 22

Test case 23

Test case 24

Test case 25

Test case 26

Test case 27

Test case 28

Test case 29

Test case 30

Test case 31

Test case 32

Test case 33

Test case 34

Test case 35

Test case 36

Test case 37

Test case 38

Test case 39

Test case 40

Test case 41

Test case 42

Test case 43

Test case 44

Test case 45

Test case 46

Test case 47

Test case 48

Test case 49

Test case 50
Compiler Message
Success
Input (stdin)

Download
02-08-2025 04-09-2025
Expected Output

Download
5
BlogScoringEnvironment
