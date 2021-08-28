#include <iostream>
using namespace std;

//video yputube C++Pointers full course beginner to advanced , CodeBeauty 1h53m.

int add(int a, int b){// Esta função recebe dois parametros int a e b.
    return a+b;
}  //Função 


int main(){

int(*funcPtr)(int, int) = add
/*Criamos a função pointer que está apontada para a função add. Função add que tem como argumentos dois int: a e b. A int(*funcPtr) retorna um inteiro. */
cout << add(2, 3) << endl;  //invocamos a função add. O resultado 5.
cout << funcPtr(3, 4) << endl; //invocamos a função add utilizando uma função pointer: int(*funcPtr)(3, 4) passando dois parametros int o 3 eo 4. O resultado vai ser 7.



  system("pause>null");
}  