#include <iostream>
using namespace std;  

int main(){
    //Program to swapping values of two variables() dois cops cheios e utilizando um terceiro copo vazio) OS COPOS SÃO AS VARIAVEIS.Não pensar nos valores(10 ou 20) mas sim nas variaveis que são os copos.

    int a = 20;
    int b = 10;
//MÉTODO UTILIZANDO UMA TERCEIRA VARIÁVEL.
    int temp = a;    //criei uma variável temporaria temp e vou atribuir-lhe o que estiver dentro da varivel a.
    a = b;  // como temos a variavel a livre, vou colocar dentro da variavel a, o que estiver dentro da varivel b.
    b = temp; //vou colocar dentro da variavel b, que está livre, vou atribuir-lhe o que estiver dentro da variavel temp(que é a variavel a).

    cout << "a = " << a << ", b = " << b << endl;//resultado a=10, b= 20

//MÉTODO SEM UTILIZAR UMA TERCEIRA VARIAVEL.
int a = 20;
int b = 10;

a = a + b;//vou atribuir á variavel a o que estiver dentro da própia variavel a mais o que estiver dentro da variavel b. //20+10=30

b = a - b;//vou atribuir á variavel b o que estiver dentro da variavel a(que agora é 30) menos o que estiver dentro da variavel b. //30-10=20

a = a - b;//vou atribuir á variavel a o que estiver dentro da própia variavel a(30) menos o que estiver dentro da variavel b. //30-20=10

 cout << "a = " << a <<endl;         //resultado a=10
 cout << ", b = " << b << endl;     //resultado b=20

    
    system("pause<0");
}