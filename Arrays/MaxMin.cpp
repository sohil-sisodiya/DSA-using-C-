#include<iostream>
using namespace std;

// Function for Maximum Value in Array
int GetMax(int num[], int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {

// Another value of Maximum value
    maxi = max(maxi,num[i]);

 /*       if(num[i]>maxi){
            maxi = num[i];
        }                      */
    }
    return maxi;
}

// Function for Minimum Value in Array
int GetMin(int num[], int n) {
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {

// Another value of Maximum value
    mini = min(mini,num[i]);
    
/*        if(num[i]<mini){
            mini = num[i];
        }                     */
    }
    return mini;
}

// Function for output
int main() {
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "Maximum value is " << GetMax(num,size) <<endl;
    cout << "Minimum value is " << GetMin(num,size) <<endl;
}