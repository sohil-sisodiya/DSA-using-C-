#include<iostream>
using namespace std;

// 1--> Even 
// 0 --> Odd

bool IsEven(int a) { 


// odd
    if (a&1) {
        return 0;
    }

// Even
    
    else {
        return 1;
    }

 }

 int main() {

    int num;
    cout << "Enter number"<< endl;
    cin >> num;

    if (IsEven(num)) {
        cout << "Number is Even" << endl;
    }

    else {
        cout << "Number is Odd" << endl;
    }
 
 }