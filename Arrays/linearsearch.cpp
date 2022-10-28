#include<iostream>
using namespace std;

bool Search(int arr[],int size, int key) {

    for(int i=0; i<size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
     int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    int key;
    cout << "Enter the Number who you want to search in array" <<endl;
    cin >> key;

    bool found = Search(num,size,key);
    if (found) {
        cout << key << " is Present" <<endl;
    }
    else {
        cout << key << " is Absent" <<endl;
    }
}