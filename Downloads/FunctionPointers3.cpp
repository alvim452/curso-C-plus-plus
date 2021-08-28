#include <iostream>
#include<vector>
using namespace std;

//video yputube C++Pointers full course beginner to advanced , CodeBeauty 1h56m.

//Qual é o principal objectivo da utilização das FunctionsPointers?Resposta: Para passar uma função como argumento ou parametro, para uma outra função, com o objectivo último de optimizar  a escrita do nosso código para ser reutilizável.

bool ascendingCompare(inta, intb){
    return a < b; 
    /*função compara dois numeros e verifica se o primeiro é menor que o segundo, e retorna se é verdadeiro ou não*/
}
bool descendingCompare(int a, int b){
    return a > b;
    /*função compara dois numeros e verifica se o primeiro é maior que o segundo, e retorna se é verdadeiro ou não*/

}

//void sortAscending(vector<int>& numbersVector){//Nome inicial da função.
    //Não é necessario compreender o código desta função.
    void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)){
        /* A função customSort recebe como parametro uma functionPointer que agora criámos e que aponta para uma das duas funções; ascendingComparae ou a função descendingCompare: bool(*compareFuncPtr)(int, int) que retorna um valor booleano, e que recebe como parametros dois int(de uma das funções para qual está apontada que são: a descendingCompare ou ascendingCompare) e que são passadas para a função customSort() como patrametros */
    for( int startIndex=0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;

        for(int currentIndex = startIndex+1; currentIndex < numbersVector.size(); currentIndex++){
             //we are doing comparison here
             //if(ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
             if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))

             bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}
/*void sortDescending(vector<int>& numbersVector){
   for( int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;

        for(int currentIndex = startIndex+1; currentIndex < numbersVector.size(); currentIndex++){
             //we are doing comparison here
             //if(descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
             if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))

             bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]); 
}*/

void printNumbers(vector<int>& numbersVector){
    for(int i= 0; i< numbersVector.size;++i){
        cout << numbersVector[i] <<' ';
    }
}


int main(){

    vector<int>myNumbers ={ 2, 5, 1, 3, 6, 4}   //Definimos um vector.

    bool(*funcPtr)(int, int) = ascendingCompare;       //3º teste.
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);
    /*criamos uma functionPointer, bool(*funcPtr) que aponta para a função(ascendingCompare) que retorne valores boolenanos, a função ascendingCompare recebe dois valores int.
    Invocamos a função customSort() na qual passamos como parametros o vector myNumbers eo pointer function funcPtr() que aponta para a função ascendingCompare().
     O resultado vai ser: 1 2 3 4 5 6.  */
     

    bool(*funcPtr)(int, int) = descendingCompare;    //4ºteste.
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);
    /*criamos uma functionPointer, bool(*funcPtr) que aponta para a função(descendingCompare) que retorne valores boolenanos, a função descendingCompare recebe dois valores int.
    Invocamos a função customSort() na qual passamos como parametros o vector myNumbers eo pointer function funcPtr() que aponta para a função descendingCompare().
     O resultado vai ser: 6 5 4 3 2 1.  */



    /*sortAscending(myNumbers);                   //1º teste.
    printNumbers(myNumbers);  //O resultado vai ser: 1 2 3 4 5 6.

    sortDescending(myNumbers);                  //2ºteste.
    printNumbers(myNumbers);  //O resultado vai ser: 6 5 4 3 2 1.
    */






  system("pause>null");
}  