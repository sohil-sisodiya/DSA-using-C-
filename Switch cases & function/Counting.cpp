#include<iostream>
using namespace std;

// Function Body
void PrintCounting(int n){
     
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout <<endl;
}

int main(){

    int num;

    cout<<"Enter the value of the End of Counting" <<endl;
    cin >> num;

    // Function Call
    PrintCounting(num);

    return 0;
}