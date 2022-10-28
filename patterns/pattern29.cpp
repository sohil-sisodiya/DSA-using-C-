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

        // for first tringle
        for (int j=1; j<=i; j++) {
             cout<< j;
        }

        // for second tringle
        int second_tringle;
    for(second_tringle=1; second_tringle<=i-1; second_tringle++){
        cout << second_tringle;
    }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
   1
  121
 12321
1234321
  */