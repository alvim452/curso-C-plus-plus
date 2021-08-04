#include <iostream>
using namespace std;

int factorialRecursiveFunction(int z){
    if(z==0){
       return 1;
    }
       return  z * factorialRecursiveFunction(z-1); 
}

int main(){

    int number, Factorial; 

    cout << "Enter a Number; ";
    cin >> number;

    Factorial = factorialRecursiveFunction(number);

    cout << number << "!= "  << Factorial << endl;

     system("pause<0");
} 