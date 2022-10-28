//  Array -->  Array is a list which contain same type of elements.

#include<iostream>
using namespace std;

// Function with Array 

void PrintArray(int arr[],int size) {
    cout << "Printing the Array" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout << "Printing of Array is Done";
}

int main() {
    
    // Declaring Array 
    int firstArray[5] = {1, 2, 3, 4, 5};

    // Accessing Array & calling Array
    cout << firstArray[3] << endl; 

    // Acessing the Array with Function 
     PrintArray(firstArray,5);

    return 0;
}