#include<iostream>
using namespace std;

// function for Find Unique Element in Array:

int FindUnique(int arr[], int size){
    
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans^ arr[i];
    }
    return ans;
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
    cout << "The Unique value is:" << endl;
    int Answer =  FindUnique(num,size); // calling the function of unique element

    cout << Answer <<endl; // Printing the Answer

    
}