#include<iostream>
using namespace std;

// 1 --> Prime number
// 0 --> Not prime number

bool IsPrime(int n) {
    
    for (int i = 2; i < n; i++) {
        // Divide
        if (n % i == 0){
            return 0;
        }

    }
        return 1;

}

int main() {

    int num;

    cout<<"Enter the number" <<endl;
    cin >> num;

    if(IsPrime(num)) {
        cout << num << " is a prime number" <<endl;
    }
    else {
    cout << num << " is not a prime number" <<endl;
    }
    return 0;
}