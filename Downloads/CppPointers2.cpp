#include <iostream> 
using namespace std;

/*
 A VOID POINTER - È um ponteiro especial que pode armazenar um endereço de varivel de outro tipo qualqer de data type (float, int, char bool etc ) que eu passe para esse void pointer. Mas o void pointer tem uma limitação: não podemos directamente DES-REFERENCIAR um void pointer.
 */

void printNumber(int* numberPtr){  //Função
    cout << *numberPtr << endl;  
    /*des-referenciei.Objectivo da função: Vai mostrar o valor armazenado no pointer que passarmos,para tal  vamos ter que passar no endereço uma variável inteira (int)*/
}
void printLetter(char* charPtr){  //Função
    cout << *charPtr << endl;  
    /*des-referenciei.Objectivo da função: Vai mostrar o valor armazenado no pointer que passarmos, para tal vamos ter que passar no endereço uma variável inteira (int)*/
}

/*Mas o que acontece se eu quizer fazer printNumber de uma variavel float, bool, double, etc.
 Vou ter que criar uma função especifica para cada um dos tipos de  data type. 
 Resolvemos esse problema utilizando uma única VOID POINTER. A void pointer pode apontar para uma variável de qualquer tipo de data type  SOLUÇÃO:*/

void print(void* ptr, char type)  
/* 
 Nome da função print porque é genérica pode trabalhar com quaisquer tipos de data type. Como é que funciona o char type?:
 Na situação  e passarmos no parametro um int pointer  no(void*ptr), o char type  vai ter o valor de a.
 No caso de passarmos no parametro um character (char) pointer no(void pointer), o char type  vai ter o valor de c.
 No caso de passarmos no parametro um float pointer no (void pointer), o char type  vai ter o valor de f.
 No caso de passarmos no parametro um double pointer no (void pointer), o char type  vai ter o valor de d. 

 Mas como é que vamos des-referenciar o pointer(saber o valor da variável?) vamos utilizar o switch case.
  */ 
 switch(type){
     case 'i': cout << *((int*)ptr) << endl; break;
     /*handle (segura) um int*.Vou ter que transformar o void* ptr num int* (primeiro parametro da função.)*/
     case 'c': cout << *((char*)ptr) << endl; break;        //handle a char*.
     /* Agora quando invocar esta print função terei o valor do nunber e da letter, usando apenas esta função para todos os tipos de data type*/

 }

int main(){

     int number = 5;
     printNumber(&number);
     /* Vamos passar na função o endereço da variavel number. O resultado vai ser 5 */

     char letter = 'a';
     /* vamos ter que criar uma nova função pois a anterior só trabalha com variaveis do tipo int. */
     printLetter(&letter);
     /* Vamos passar na função o endereço da variavel number. O resultado vai ser a   */

     /*Mas o que acontece se eu quizer fazer printNumber de uma variavel float, bool, double, etxc. Vou ter que criar uma função especifica para cada um dos tipos de  data type. Resolvemos esse problema utilizando uma única VOID POINTER. A void pointer pode apontar para uma variável de qualquer tipo de data type  */

     print(&number, 'i' ); //Como number se trata de um int passamos o parametro i. O resultado vai ser 5.
     print(&letter, 'c' ); //Como number se trata de um int passamos o parametro c. O resultado vai ser a. 

     /*
     MUITA ATENÇÃO - Ao trabalhar com void pointers, porque o compilador, neste caso especifico, não tem forma de nos informar hei atenção está a querer transformar um void pointer que é um int, tranformar num char ou vice versa,O compilador não tem maneira de verificar se eu estou a cometer um erro ou não, porque no interior de um void pointer eu posso armazenar um endereço de qualquer variável de qualquer data type e a seguir eu posso tentar alterar o pointer em qualquer data type, obtenho um logical error que são muito mais dificeis de encontrar no interior dos programas.
     */


    system("pause>0");

}
