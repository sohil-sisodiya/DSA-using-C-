#include<iostream>
using namespace std;

int main(){
        int i,n;
        cin>> n ;

        bool Isprime = 1;

        for(i=2;i<n;i++){
            if (n%i == 0){

            Isprime = 0;
            break;

            }
        }

        if (Isprime==0){
            cout<< n << " not a prime number" << endl;
        }
        else{
            cout<< n << " is a prime number" << endl;
        }

    return 0;
}