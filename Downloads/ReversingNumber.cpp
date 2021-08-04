#include <iostream>
using namespace std;  



int main(){

    //Reversing a number

    int number, reversedNumber=0;  

    /*reversedNumber=0, 0 multiplicamos por 10 o reversedNumber e a seguir somamos o ultimo digito do number; ex: 0x10=0 0+3 igual a 3 e vamos remover o ultimo digito do number (3).A seguir ao 3, multiplicamos por 10 =30, e somamos o ultimo digito do number (2) fica 32 e por fim multiplicamos por 10 o reversedNumber 32x10=320 e somamos o ultimo digito do number (1) 320+1 =321*/

    cout << "Enter a number: ";  
    cin >> number;               //123

    while(number !=0){
        reversedNumber *=10; //Vamos multiplicar o reversedNumber por 10, reversedNumber = reversedNumber*10;  0x10=0 
        //int lastDigit =number % 10;     //lastDigit obtem-se através sa modulação do number por 10, é igual ao ultimo digito.
       
        reversedNumber +=number % 10;//Vamos agora somar ao reversedNumber o lastDigit que se obtem pelo number % 10. 0+2=2
        number /=10;  //Para descatarmos o ultimo digito do number,Vamos dividir o number por 10. /*123:10=12, number é variavel inteiro assim como 10 é inteiro, resultado é um inteiro. ex:123=12 */
    }
    cout << "Reversed: " << reversedNumber;


    system("pause<0");
} 