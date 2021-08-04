#include <iostream>
using namespace std;  

/*Buid a program for counting digits of a number*/ 

int main(){


    int number;
    cout <<"Enter a Number; ";
    cin >> number;
    if(number==0){
        cout <<"You have entered 0;\n";
    }else{
        if(number < 0){
            number = -1 * number; 
            /* Se o numero for negativo, multiplico esse numero por -1 para o transformar em um numero positivo*/
        }
          //Principio de funcionamento geral do programa
         //1325      132        13         1
        //counter=0  counter=1  counter=2  counter=3  counter=4
        int counter=0;
        while(number > 0){
            /*number =number / 10; //number é variavel inteiro assim como 10 é inteiro, resultado é um inteiro. ex:123=12 */
            number /=10;  //É a mesma coisa.
            counter++;
        }
        cout << "Number contains " <<counter << " digits\n";
    }

    system("pause<0");
}