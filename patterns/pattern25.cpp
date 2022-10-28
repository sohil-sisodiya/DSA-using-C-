// three loop using in this types of pattern;

#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        // for printing space 

        for(int space =0; space<n-i; space++){
        cout << " ";
        }

        for (int j=1; j<=i; j++) {
             cout<< i;
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
   1
  22
 333
4444
  */