#include <iostream>
using namespace std;

//COMMON QUESTIONS.
/* PVS-STUDIO. static code analyser. promo code #code_beauty*/

int main()
{

    int savedMoney[5] = {100, 200, 300, 400, 500};

    int total = 0;
    //for(int i=0; i<= 5; i++){ erro comun index 0 to 4 or <=4 not 5.
    for(int i=0; i< 5; i++){  //corrrigido
    for(int i=0; i< 5; i--){  // erro comum; infinit loop, ou loop infinito porque neste loop  regressivo, a condição i<5 é sempre verdadeira; deveria ser for(int i=5; i=0; i--)

    total += savedMoney[i];
    cout << "Total: " << total << endl;
}

system("pause>0");
return 0;
}