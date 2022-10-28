#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
             cout<<i-j+1 << " ";
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
1
2 1
3 2 1
  */