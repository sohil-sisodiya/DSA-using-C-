#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long n;
    long p;
    long i;

    cin >> n;
    cin >> p;
    cin >> i;

    int value = pow(n,p);
    int ans = value%i;

    cout << " ans is " << ans << endl; 


    return 0;
}