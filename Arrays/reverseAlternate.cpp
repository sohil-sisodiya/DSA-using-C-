#include<iostream>
using namespace std;

// function for Reverse Alternate:

void reverseAlt(int arr[],int n) {

    for (int i = 0; i < n; i= i+2) {
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
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
     reverseAlt(num,size);
     PrintArray(num,size);
}