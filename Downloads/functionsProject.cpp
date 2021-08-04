#include <iostream>
using namespace std;  

/*Function - Grupo de codigo que resolve um problema especifica. Esse bloco de código só é executado quando chamamos essa função. No c++ existe pelo menos uma função que é  a main function. A main function é a primeira a ser executada. Para alem da mian function podemos criar as nossas própias funções.  Parenteses curvos dentro são os argumentos,parenteses longos é o corpo da função, void é uma função que não retorna nada.1º-tipo de retorno da nossa função: 2º-Temos que invocar ou chamar a função para a mesma ser executada, As funções tornam o nosso código mais legivel e tornam o codigo reutilizável*/

void function(); /*Declaração da função - fica antes da função main do c++.Vai dizer ao compilador, qual vai ser o tipo de retorno da função, o nome da função e se ha parametros da função.Botão direito do rato ou F12 e vamos automaticamente para a defenição da função*/

int main(){

   cout << "Hello from main()\n";
   function();        /* Chamada da função- Estamos a chamar a função function().Podemos chamar/invocar a função sempre que quisermos. O codigo e executado de cima para baixo */
   function();
   function();
   function(); //o codigo pode ser reutilizado e executado as vezes que eu quiser, não necessito de reescrever o mesmo codigo varias vezes, qd uso a mesma função*/

   system("pause<0");
}  

void function(){   /*Defenição da função - situa-se após a função main do c++*/
   cout << "Hello from function()" << endl;
}