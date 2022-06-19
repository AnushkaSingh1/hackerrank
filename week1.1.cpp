#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float z=0,p=0,ng=0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        if (arr[i]<0) {
            ng++;
        }
        else if (arr[i]>0) {
            p++;
        }
        else {
            z++;
        }
    }
    double nz,nng,np;
    nz = z/n;
    nng = ng/n;
    np = p/n;
    cout<<np<<endl;
    cout<<nng<<endl;
    cout<<nz<<endl;
}


Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4 are acceptable.
    
    Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
