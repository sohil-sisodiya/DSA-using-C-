#include<iostream>
using namespace std;

// Funtion of sum of Array
int sumofArray(int num[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + num[i];
    }
    return sum;
}

// Function of Output
int main () {
     int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout <<"Sum of Array: " << sumofArray(num,size) <<endl; 
}