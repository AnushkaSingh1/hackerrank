void separateNumbers(string s) {
    int basenlength = 1, pos = 0, nlength = 1, next_length = 1;
    long n = atol(s.substr(0, 1).c_str()), next = 0;
    
    if (n == 0 || s.length() == 1) {
        cout << "NO" << endl;
        return;
    }
    
    while (basenlength <= s.length()/2) {
        pos = 0;
        nlength = basenlength;
        next_length = nlength;
        bool no = false;
        long first = -1;
        int digitscovered = 0;
        
        while ((pos+nlength+next_length) <= s.length()) {
            // while the next number starts with a trailing zero
            // enlarge the current number to comprise the zero
            while (s.substr(pos+nlength, 1)[0] == '0' && ((pos+nlength+next_length) <= s.length())) {
                nlength++;
                next_length++;
            }
            
            // if the right number starts with a trailing zero after the above,
            // abort (not beautiful)
            if (s.substr(pos+nlength, 1)[0] == '0') {
                no = true;
                break;
            }
                            
            // get the current and next number from the string
            n = atol(s.substr(pos, nlength).c_str());
            next = atol(s.substr(pos+nlength, next_length).c_str());
            
            // digits covered so far
            digitscovered = pos+nlength+next_length;

            // if current and next are not beautiful
            if (next != n + 1) {
                // cannot try any further
                if (pos + nlength + next_length >= s.length()) {
                    no = true;
                    break;
                }
                if (next_length < nlength + 1)
                    // increase digits of the next number
                    next_length++;
                else if (next_length == nlength + 1) {
                    // increase digits of the current number
                    nlength++;  
                }
            }
            // next and current are beautiful
            else {
                // register the first number of the beautiful sequence
                if (first < 0) {
                    first = n;
                }
                // move the left number forward
                pos += nlength;
                nlength = next_length;
                n = next;
            }
        }
        
        // all digits have been covered and the sequence is beautiful
        if (!no && s.length() - digitscovered == 0) {
            cout << "YES" << " " << first << endl;
            return;
        }
        
        // increase the length of the current number and start over
        basenlength++;
    }
    
    cout << "NO" << endl;  
}



















A numeric string, , is beautiful if it can be split into a sequence of two or more positive integers, , satisfying the following conditions:

 for any  (i.e., each element in the sequence is  more than the previous element).
No  contains a leading zero. For example, we can split  into the sequence , but it is not beautiful because  and  have leading zeroes.
The contents of the sequence cannot be rearranged. For example, we can split  into the sequence , but it is not beautiful because it breaks our first constraint (i.e., ).
The diagram below depicts some beautiful strings:

image

Perform  queries where each query consists of some integer string . For each query, print whether or not the string is beautiful on a new line. If it is beautiful, print YES x, where  is the first number of the increasing sequence. If there are multiple such values of , choose the smallest. Otherwise, print NO.

Function Description

Complete the separateNumbers function in the editor below.

separateNumbers has the following parameter:

s: an integer value represented as a string
Prints
- string: Print a string as described above. Return nothing.

Input Format

The first line contains an integer , the number of strings to evaluate.
Each of the next  lines contains an integer string  to query.

Constraints

