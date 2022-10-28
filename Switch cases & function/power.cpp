#include<iostream>
using namespace std;

int power(int a, int b) {

        int i, ans = 1;

        for (i=1; i<=b; i++) {

            ans = ans*a;
        }

        return ans;

}

int main () {
    int a,b;

    cout << "enter the value of a" << endl;
    cin >> a;

    cout << "enter the value of b" << endl;
    cin >> b;
      
      int Answer = power(a,b);

      cout << "Answer is " << Answer;
}


// second Method to use a function


/*
#include<iostream>
using namespace std;

int power(int a, int b) {

    cout << "enter the value of a" << endl;
    cin >> a;

    cout << "enter the value of b" << endl;
    cin >> b;
      

        int i, ans = 1;

        for (i=1; i<=b; i++) {

            ans = ans*a;
        }

        return ans;

}

int main () {
      
      int Answer = power(a,b);

      cout << "Answer is " << Answer;
}

*/