#include <iostream> 
using namespace std;

//POINTERS AND ARRAYS


int main(){

    

   /* int luckyNumbers[5]}={2, 3, 5, 7, 9};
    cout <<luckyNumbers <<endl;
    //Resultado: 00EFFAC8. Obtemos um endereço que é do 1ºelemento do vector.

    cout <<&luckyNumbers[0] << endl;
    //Resultado: 00EFFAC8.Igual ao de cima, o que prova que o obtivemos em cima foi o endereço do 1ºelemento do vector.O nome luckyNumber comporta-se como um pointer e os parenteses rectos[] comportam-se como um operador de referencia.

    cout << luckyNumbers[2] <<endl; 
    //Vamos obter o endereço do 1º elemento somar mais 2 endereços e vamos obter o valor guardadao la´.Resultado 5, porquê: 1ºendereço[0] valor 2, 2º endereço[1] valor 3 e3ºelemento[2] valor 5. 

    cout << *(luckyNumbers+2) << endl; //Obtemos o mesmo valor: 5, igual ao de cima.Nesta utilizamos a DES-REFERENCIAÇÃO para obtermos o valor da variavel na posição 2.
    */

   int luckyNumbers[5];
   for(int i=0; i<=4; i++){
       cout << "Number: "; //Pede ao utilizador para introduzir os valores.
       cin >> luckyNumbers[i];
       /* resultado:
       Number: 2
       Number: 5
       Number: 7
       Number: 9
       Number: 13 */
   }
   for(int i=0; i<=4; i++){
       //cout << luckyNumber[i] <<endl;     //podia ser assim, mas....
       cout << *(luckyNumbers+i) << " "; //Utilizando DES-REFERENCIAÇÃO.
       //Resultado 2 5 7 9 13

       /*
       IMPORTANTE:
       O que acontece se eu mandar introduzir 5 valores no vector for(int i=0; i<=4; i++), e depois mandar escrever o vector mas com 6 valores for(int i=0; i<=5; i++)?
       Resposta vamos obter os 4 valores introduzidos no vector com indice 4 mas vamos obter mais um valor estranho que não pertence ao vector mas que na memoria fisica esta na posição imediatamente a seguir ao último indice.
       Exemplo: 2 5 7 9 13 -858993460.Este último valor pertence a alguem mas não ao nosso vector[5].O que nos pode +provocar grandes problemas. Conselho:ter muita atenção quando iteranos o nosso vector e aceder unicamente á localização da memória que pertence ao vector no qual estou a fazer a iteração(ciclo for).
        Array com 5 elementos iteração de 0 to 4; array com 10 elementos iteração de 0 a 9 etc. Muita atenção para não aceder a memória que não pertence ao nosso vector.
       */

   }


    system("pause>0");

}