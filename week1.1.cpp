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
