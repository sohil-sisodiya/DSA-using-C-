#include<iostream>
using namespace std;

int main() {
    int i,n,count=1; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
             cout<<count << " ";
             count = count + 1;
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
1
2 3
4 5 6
7 8 9 10
  */