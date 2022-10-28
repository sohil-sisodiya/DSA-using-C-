#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;
    char ch = 'A';

    for (i=1; i<=n; i++){
        for (int j=1; j<=n; j++) {
             cout<<ch << " ";
             ch = ch + 1;
            
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
A B C 
D E F
G H I
  */