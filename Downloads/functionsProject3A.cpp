#include <iostream>
using namespace std;  

//RETURN FUNCTION - return only one value.
/*Checking prime numbers.(divisible  by himself and by one)*/


bool isPrimeNumber(int number){ /* Apresentação da função e definição da função.*/
      
     for(int i = 2; i < number; i++){
          if(number % i == 0)
               return false;
     }
          return true;
}
     
int main(){

    int contador=0;// vamos contar o numero total de numeros primos


    for(int i = 1; i <= 1000; i++){
        bool isPrime= isPrimeNumber(i);
        if(isPrime){
            contador++;
            cout << i <<  " is a prime number\n"; 
        }
            
    }
    cout <<endl;
    cout << "Existem " << contador <<" numeros primos!" << endl;

   system("pause<0");
}
    
