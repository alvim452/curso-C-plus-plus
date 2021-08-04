#include <iostream>
using namespace std;  

int main(){
    //+, -, *, /, % operadores unitarios
    cout << 5 + 2 <<endl;
    cout << 5 / 2 << endl; // resultado errado=2
    cout << 5 /2.0 << endl; //resultado certo=2.5, tenho que utilizar um ou ambos operadores decimais(float) ou double. 
    cout << 5 % 2 << endl; //o resultado será 1.

    //++, -- operadores binarios.
    int counter =7;
    counter ++;   
    cout << counter <<endl;  //resultado será 8, incrementa uma unidade

    counter --;
    cout <<counter <<endl;   //resultado será 6, decrementa uma unidade

    int counter2 = 7;
    cout << counter2++ << endl;        //resultado será 7, porque primeiro realiza uma qq operação na variavel e só depois incrementa uma unidade. Chamado Post-increment.

    cout << ++counter2 << endl;        //resultado será 8, porque primeiro incrementa uma unidade, e depois é que realiza uma qq operação na varaiavel.Chamado Pre-increment.

    cout << counter2-- << endl;        //resultado será 7, porque primeiro realiza uma qq operação na variavel e só depois decrementa uma unidade. Chamado Post-decrement.

    cout << --counter2 << endl;        //resultado será 6, porque primeiro decrementa uma unidade, e depois é que realiza uma qq operação na variavel.Chamado Pre-decrement.

    system ("cls");   // vai limpar todos os valores na consola de saída.

    //Operadores relacionais <, >, <=, >=, ==, != (A ,virgula é um operador e um separador)
    int a=5, b=5;
    cout <<(a>b) <<endl;  // Escreva na tela se; a for maior que b. Est+a entre parentese pois é uma expressão.Resultado é 0 que é falso.
    cout <<(a<b) <<endl;  //Resultado é 0 que é falso.FALSE.
    cout <<(a<=b) <<endl;  //Resultado é 1 que é verdadeiro.TRUE.
    cout <<(a==b) <<endl;  //Resultado é 1 que é verdadeiro.TRUE.
    cout <<(a|=b) <<endl;  //Resultado é 0 que é falso.FALSE.

     system ("cls");   // vai limpar todos os valores na consola de saída.

     //Operadores Lógicos &&, ||, ! (e, ou, not) Servem para combinar duas condiçoes numa única condição.
     int a=5, b=8;
    cout <<(a==5 && b==5) <<endl; //É A igual a 5 e B igual a 5?Resultado é 0 que é falso.FALSE.Ambas tinham que ser verdadeiras para o resultado ser verdadeiro.
    cout <<(a==5 || b==5) <<endl;//Resultado é 1 que é verdadeiro. TRUE.(Uma das expressões são verdadeiras)
    cout <<!(a==5 || b==5) <<endl; //O operador ! nega o que vem a seguir.O resultado da expressao é verdadeira mas o sinal ! (not)nega o resultado, logo é falso.

    //prioridade dos operadores; aritemeticas, relacionais, logicas.
    cout <<(a==5 && b==5+3) <<endl;////Resultado é 1 que é verdadeiro. TRUE.Primeira prioridade operador aritmetco 5+3=8; segunda prioridade relacionais(==  ==); terceiro logicos (&&)

    system ("cls");

    //Operadores de atribuição (assigments operators). =, +=; -=, *=,
     /=, %= 
     (funcionam da seguinte maneira : atribui o que estiver(valor) do lado direito da atribuicão, ao que estiver do lado esquerdo da atribuição.)
     
      //x +=7;//igual a x=x+7 aprimeira prioridade é o operador aritemico(x+7) e a seguiratribui ao que estiver do lado esquerdo.
    int x=5;
    x +=7;
    cout<< x<< endl;    //resultado será 12
    x -=7;
    cout<< x<< endl;    //resultado será -2 (antes x=5)
     

    














    
    system("pause<0");
}