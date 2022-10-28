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

        // for printing stars
        for (int j=1; j<=i; j++) {
             cout<<"* ";
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
   *
  * *
 * * *
* * * *
  */