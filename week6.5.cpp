int formingMagicSquare(vector<vector<int>> s) {
    std::vector<int> cst(8, 0);
    std::vector<std::vector<int>> magic{
        std::vector<int>{6,1,8},
        std::vector<int>{7,5,3},
        std::vector<int>{2,9,4},
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cst[0] += std::abs(s[i][j] - magic[i][j]);
            cst[1] += std::abs(s[i][j] - magic[i][2 - j]);
            cst[2] += std::abs(s[i][j] - magic[2 - i][2 - j]);
            cst[3] += std::abs(s[i][j] - magic[2 - i][j]);
            cst[4] += std::abs(s[i][j] - magic[j][i]);
            cst[5] += std::abs(s[i][j] - magic[j][2 - i]);
            cst[6] += std::abs(s[i][j] - magic[2 - j][2 - i]);
            cst[7] += std::abs(s[i][j] - magic[2 - j][i]);
        }
    }
    return *std::min_element(cst.begin(), cst.end());
}





















We define a magic square to be an  matrix of distinct positive integers from  to  where the sum of any row, column, or diagonal of length  is always equal to the same number: the magic constant.

You will be given a  matrix  of integers in the inclusive range . We can convert any digit  to any other digit  in the range  at cost of . Given , convert it into a magic square at minimal cost. Print this cost on a new line.

Note: The resulting magic square must contain distinct integers in the inclusive range .

Example

$s = [[5, 3, 4], [1, 5, 8], [6, 4, 2]]

The matrix looks like this:

5 3 4
1 5 8
6 4 2
We can convert it to the following magic square:

8 3 4
1 5 9
6 7 2
This took three replacements at a cost of .

Function Description

Complete the formingMagicSquare function in the editor below.

formingMagicSquare has the following parameter(s):

int s[3][3]: a  array of integers
Returns

int: the minimal total cost of converting the input square to a magic square
Input Format

Each of the  lines contains three space-separated integers of row .

Constraints

Sample Input

4 9 2
3 5 7
8 1 5
Sample Output

1
Explanation

Matrix  initially looks like this:

4 9 2
3 5 7
8 1 5
Observe that it's not yet magic, because not all rows, columns, and center diagonals sum to the same number.

If we change the bottom right value, , from  to  at a cost of ,  becomes a magic square at the minimum possible cost. Thus, we print the cost, , on a new
