#include<iostream>
using namespace std;

// function for Reverse Array:

void reverseArray(int arr[],int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[],int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
     int size;
     cout << "Enter the size:" << endl; 
     cin >> size;

    int num[100];

    cout << "Enter the number of Arrays:" << endl;

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "The Revesre value is:" << endl;
     reverseArray(num,size);
     PrintArray(num,size);
}