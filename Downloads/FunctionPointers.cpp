#include <iostream>
using namespace std;

//video yputube C++Pointers full course beginner to advanced , CodeBeauty 1h48m

 int getrNumber(){  //função getNumber() que retorna o numero 5.
     return 5;
 }

int main(){

/*cout << getNumber();        //Quando chamamos a função  Resultado: 5*/
/*cout << getNumber;         //Quando chamamos a função sem os () obtemos o endereço fisico da função na memória. Resultado: 010011E0*/

int(*funcPtr)() = getNumber;  /
/*criamos uma function pointer sem parametros(vazio) porque a função getNumber não recebe parametros, afunção pointer retorna um valor int. A minha função pointer está apontado para a função getNumber, e a getNumber function vai-nos dar o endereço fisico da função*/

cout << funcPtr();  //Invocamos a getNumber function usando a functionpointer,isto porque a pointer FuncPtr() está apontada para a getNumber(). O resultado vai ser 5. 



    system("pause>null");
}