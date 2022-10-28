#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
        char ch = 'A' + n - i + j - 1;
             cout<<ch<< " ";
            ch = ch + 1;
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
D
C D
B C D 
A B C D
  */
