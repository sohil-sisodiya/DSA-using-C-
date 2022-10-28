#include<iostream>
using namespace std;

int main(){

        int a,b;

        cout << "enter the value of a" << endl;
        cin >> a;

        cout << "enter the value of b" << endl;
        cin >> b;

        char op;

        cout << "enter the Opertion who you want to perform" << endl;
        cin >> op;

        switch ( op ) {

            case '+': cout << "ans is " << a+b << endl;
            break;

            case '-': cout << "ans is " << a-b << endl;
            break;

            case '*': cout << "ans is " << a*b << endl;
            break;

            case '/': cout << "ans is " << a/b << endl;
            break;

            case '%': cout << "ans is " << a%b << endl;
            break;

            default : cout << "Opertion is Invalid" << endl;
        }


    return 0;
}