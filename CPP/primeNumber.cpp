#include <iostream>

using namespace std;
int main () {

    int number;

    cout <<"Enter the number: " <<endl;
    cin>> number;

    for (int i=2; i < number; i++) {

        if(number % i == 0) {

            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"prime"<<endl;
            break;
        }
    }
}