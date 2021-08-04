#include <iostream>
using namespace std;  



int main(){

    //The factorial of a number.
    
    ///No, for loop, sabemos o numero de interações que iremos fazer.

    int number;  //3
    cout << "Enter a Number; ";
    cin >> number;

    int factorial = 1; //6

    //PRIMEIRO MÉTODO PARA CALCULAR FACTORIAL DE UM NUMERO.
    //6!=1X2X3X4X5X6=720.
    //for (int i=1; i <= number; i++){  
    //    factorial = factorial * i;
    //}

    //SEGUNDO MÉTODO PARA CALCULAR FACTORIAL DE UM NUMERO.
    //6!=6x5x4x3x2x1=720.
    for(int i= number; i>=1; i--){
        factorial = factorial * i;
    }
    
    cout << number << "!="  << factorial;

     system("pause<0");
} 