#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        for (int j=1; j<=i; j++) {
             cout<<i+j-1 << " ";
            
        }
        cout <<endl;
    }


    return 0;
}

/* OUTPUT
1
2 3
3 4 5 
4 5 6 7
  */

//  Other Method ____ by youtube


/*

#include<iostream>
using namespace std;

int main() {
    int i,n; // number of input
    cin>> n;

    for (i=1; i<=n; i++){
        int value = i;
        for (int j=1; j<=i; j++) {
             cout<<value << " ";
             value = value + 1;
            
        }
        cout <<endl;
    }


    return 0;
}

*/