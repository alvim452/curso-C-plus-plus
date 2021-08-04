#include <iostream>
using namespace std; 

//WHILE LOOP

/*SEQUENCIA -Código executado sequencialmente, uma linha a seguir á outra.*/
/*SELEÇÃO - Quando queremos selecionar uma parte do código par ser executado.*/
/*INTERAÇÃO - Ler e executar uma serie de vezes uma parte do código, enquanto uma condição fôr verdadeira.*/ 

/*TASKS - Write out all the numbers betwen 100-500 that are divible by 3 and 5.*/

int main(){

    int counter = 100;     /*Another way while (counter<501);*/
    while(counter <= 500) {
        if(counter % 3 == 0 && counter % 5 == 0){
            cout << counter << " is divisible\n";
            /*cout << "Infinite loop"; isto caso eu não coloque a próxima linha de comando.*/
           counter++; 
           /*Em cada interação, vai incrementar o valor da varivel counter.*/
            
        } 
        /*quando chegar a counter=501 o programa sai do loop e pára. */ 
    }
    cout << " Fim do programa\n ";

    system("pause<0");
} 