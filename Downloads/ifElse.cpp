#include <iostream>
using namespace std;  

int main(){

    //User enters integer number
    //Program write out if the number is even or odd
    //cout<< 2 % 2;   // O resultado é 0. É um numero par (even).
    //cout<< 5 % 2;  // O resultado é 1. É um numero impar (odd).

    int number;
    cout<<"Please enter awhole number: ";
    cin>>number;
    if(number %2 == 0){  //==verificar igualdades.
    cout<<"You have entered even number!"<<endl;
    } else{
        cout<<"You have entered a odd number!";
    } 
    cout<<"Thanks, bye.";

    system("pause<0");
}