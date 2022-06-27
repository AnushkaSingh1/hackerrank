vector<int> gradingStudents(vector<int> grades) 
{
    for(int i = 0, len = grades.size(); i < len; i++)
    {
        if(grades[i] > 37)
        {
            if(grades[i] % 5 > 2)
                grades[i] = ((grades[i] / 5) + 1) * 5;
        }
    }
    
    return grades;
}












HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0  to 100.
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the grade and the next multiple of 5 is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
Examples

 round to  (85 - 84 is less than 3)
 do not round (result is less than 40)
 do not round (60 - 57 is 3 or higher)
Given the initial value of  for each of Sam's  students, write code to automate the rounding process.

Function Description

Complete the function gradingStudents in the editor below.

gradingStudents has the following parameter(s):

int grades[n]: the grades before rounding
Returns

int[n]: the grades after rounding as appropriate
Input Format

The first line contains a single integer, , the number of students.
Each line  of the  subsequent lines contains a single integer, 
