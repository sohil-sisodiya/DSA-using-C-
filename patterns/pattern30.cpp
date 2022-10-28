// DABBANG PATTERN

#include<iostream>
using namespace std;

int main() {
    int i,n,j=1; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        // for First tringle
        
        for (j=1; j<=n-i+1; j++) {
             cout<< j;
        }

        // for Second tringle
        for(int k=i-1;k>0; k--) {
            cout<<"*";
        }

        // for third tringle
        for(int g=i-1;g>0; g--) {
            cout<<"*";
        }

        // for forth tringle
        for(int l=n-i+1; l>=1; l--) {
            cout << l;
    }
        cout <<endl;

    }
    return 0;
}

/* OUTPUT-5
1234554321
1234**4321
123****321
12******21
1********1
  */