#include <iostream>
using namespace std;  

//RETURN FUNCTION - return only one value.
//Checking prime numbers.(divisible  by himself and by one)

//CONTINUAÇÃO DA SEGUNDA VERSÃO DO CODIGO.
bool isPrimeNumber(int number){ // Apresentação da função e definição da função.
     //bool isPrimeFlag=true;  
     for(int i = 2; i < number; i++){
          if(number % i ==0){
               //isPrimeFlag = false; 
               //break;
               return false;
               
          }

     }
      //return isPrimeFlag;
      return true;
}


int main(){
     int number;
     cout << "Number: ";
     cin >> number;
//PRIMEIRA VERSÃO DO CODIGO
     /*bool isPrimeFlag=true;  //inicialmente todos os numeros são primos
     for(int i = 2; i < number; i++){
          // começa em i=2 porque todos os numeros são divisiveis por 1 como tal passamos imediatamente para i=2, e tambem todos os numeros são divisiveis por eles propios, logo i<number. 
          if(number % i ==0){
               isPrimeFlag = false;
               //Não é um numero primo, porque para ser primo só pode ser divisivel por 1 e por si própio, se esse numero dividido por um qualquer outro numero i dá resto zero, não pode ser primo. 
               break;
               // break porque ao encontrar um numero resto zero não é preciso continuar as iterações
          }

     }*/

     //SEGUNDA VERSÃO DO CODIGO UTILIZANDO UMA FUNÇÃO.

     bool isPrimeFlag = isPrimeNumber(number);//chamada da função isPrimeNumber()

     if(isPrimeFlag){
          cout <<" Prime number" << endl;
                    }else{
                          cout << " Not a prime number" << endl;
                         }
                   

     system("pause<0");
}   