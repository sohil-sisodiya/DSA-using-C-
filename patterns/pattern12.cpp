#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        char ch = 'A' + i-1;
        for (int j=1; j<=n; j++) {
             cout<<ch << " ";
            
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
AAA
BBB
CCC
  */