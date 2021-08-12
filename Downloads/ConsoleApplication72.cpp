#include <iostream> 
using namespace std;

//DYNAMIC ARRAYS

 /*ADVANTAGES - Continous data(faster acess) versus link lists (no continous memory, randomly memory, much slower acess) 
 UNADVANTAGES(array) Inserte ou delete an element in array is more complicated. The size of array have to be constant. The size of array have to be none before even we start the program.

 Commands:
 NEW - to allocat memory.
 DELETE - to desallocate memory.

 Using dynamic array comes with responsability: each time that you allocat memory you´ll have to desallocated memory, for that memory can be reused. Each time that you write NEW you have to write DELETE.
 */

int main(){

int size;
cout << "size: " ;
cin >> size;
//int myArray[size];
 //we got an error:"the expression have to be a constant value" the size cannot be changed and we have to declare before we start the program.
//--------DYNAMIC ARRAY---------------//
 int* myArray = new int[size];
 /* this NEW allocat an array of this size that the user as specified.And the adress of first element of array is stored in this myArray */

 for(int i=0; i < size; i++){
     cout << "Array[" << i << "] ";
     cin >> myArray[i];
 }
 for(int i=0; i < size; i++){
     //cout << myArray[i] << "  ";//Des-referenciar o pointer.
     cout << *(myArray+i) << "  ";
     /*Des-referenciar o pointer: myArray é o endereço do 1ºelemento e quando faço +i desloco o espaço na memoria e acesso ao elemento seguinte. */
 }

delete[]myArray; 
 /*Desalocamos a memoria do myArray, e como tal o pointer ficou a apontar para um endereço que não pertence ao nosso programa*/
myArray = NULL;
/*e por causa disso, é um bom procedimento(para não arranjarmos problemas ou complicações),  fazer myArray=NULL, o que quer dizer que o meu array não está a apontar para lado nenhum*/ 

system("pause>0");

}