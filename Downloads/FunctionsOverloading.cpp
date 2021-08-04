#include <iostream>
using namespace std; 


//Podemos criar varias funções com o mesmo nome, mas as funções vão ter parametros diferentes


int sum(int a, int b);                 //Defino as 3 funções
double sum(double a, double b);        //Defino as 3 funções
float sum( float a, float b, float c); //Defino as 3 funções


int main(){ 
    cout << sum(4, 3);              //resultado da função: int  sum 7
    cout << sum(4.4, 3.3);         //resultado da função: double sum 7.7
    cout << sum( 4.4, 3.3, 2.2);  //resultado da função: float sum 9.9

/*Quando invocamos as funções passamos parametros com diferentes tipos de dados(int, double, float)e dependendo do tipo de dados que passamos chamamos automaticamente a função correcta para tratar do tipo de parametros que passámos. 
Não precisamos de criar funções com nomes diferentes quando as mesmas executam a mesma função. O compilador vai automaticamente chamar a função respectiva de acordo com o tipo  de dados parametros que vamos passar.*/


    system("pause>0");
}

int sum(int a, int b){
    //int result = a +b;
    //return result;
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
float sum( float a, float b, float c){
    return a+b+c;
}

