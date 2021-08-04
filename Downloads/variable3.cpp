#include <iostream>
using namespace std;

int main(){
    int intMax = INT_MAX;
    cout<< intMax <<endl;  //resposta:2147483647
    cout << intMax +1;  //-21447483648, a variavél entrou em Data type overflow, excedeu a capacidade da varivel,a variavél responde como um relogio de ponteiros; chegou ao valor maxino 12h  passa para o valor minimo 1h.

     system("pause>0");
}