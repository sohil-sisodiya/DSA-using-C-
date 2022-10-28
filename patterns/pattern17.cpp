#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
        char ch = 'A' + i + j - 2;
             cout<<ch<< " ";
            
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
A 
B C 
C D E 
  */
