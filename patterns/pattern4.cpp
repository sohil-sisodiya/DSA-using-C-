#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=n; j++) {
             cout<< n-j+1;
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT

321
321
321  */