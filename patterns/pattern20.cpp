#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        // for printing stars
        for (int j=1; j<=n-i+1; j++) {
             cout<<"*";
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
****
***
**
*
  */