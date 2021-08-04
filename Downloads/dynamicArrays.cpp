#include <iostream>
#include<list>  
using namespace std;

//ARRAY -TIPO DE COLECÇÃO QUE ARMAZENA VALORES NA MEMÓRIA DE UMA FORMA CONTINUA.(VANTAGEM-fica mais RÁPIDO para acessar aos elementos).Uma vez criado um array(de um determinado tamanho) não posso acrescentar mais elementos(DESVANTAGEM), não posso alterar o tamanho desse array. O unico modo para acrescentar mais elementos, é criar um array maior e copiar o array anterior para dentro do novo array, e fico ainda com espaço para acrescentar mais elementos neste novo array.
//DYNAMIC ARRAY permite que o utilizador possa defenir o tamanho do array. 

//Como posso acrescentar ou apagar um elemento do meio do array sem quebrar o array?Inserrir ou apagar elementos num array fica mais lento do que fazer a mesma operação numa link  list, por exemplo. O tamanho do array tem que ser constante

    int size;
    cout << "Enter de size: ";
    cin >> size;
    //float monthArray[size];
    //NÃO É POSSIVEL, DÁ ERRO porque o tamanho do array tem de ser constante, o tamanho do array não pode ser alterado a partir do momento que o declaramos e temos que o declarar mesmo antes de começarmos o programa. Em C++ existem 2 comandos/palavras que permitem ALOCAR ou DESALOCAR a  dynamic memoryou sejareservar um espaço de memoria quando preciso(alocar) ou libertar esse espaço de memoria quando ja não preciso (desalocar). Os comandos são NEW  e DELETE. NEW alocate memory and DELETE desalocate memory when i dont need it.REGRA quando alocamos memoria quando precisamos, temos de sealocar quando não precisamos. Cada vez que escrevemos NEW vamos ter que escrever DELETE quando nao precisamos mais da memoria.

    

int main(){

    int size;
    cout << "size: " << size << endl;
    cin>> size;
    int* myArray =new int[size];//alocou memória de acordo com o size//apontador *
    for( int i=0; i< size; size++){
        cout << "Array[" << i << "]";
        cin >> myArray[i];
    }
    for( int i=0; i< size; size++){
        //cout << myArray[i] << "  ";
        cout << *(myArray+1) << "  ";
    }

    delete [] myArray; 
    //desalocámos memória, a memória deixou de pertencer ao meu programa.
    myArray = null;  //o array fica vazio, não está apontada para nada.

    system("pause>0");
}