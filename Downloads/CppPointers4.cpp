#include <iostream> 
using namespace std;

//HOW TO USE POINTERS IN ORDER TOI OBTAIN MULTIPLE VALUES FROM A FUNCTION.

int getMin(int numbers[], int size){
    //Função para encontrar o minimo valor.
    int min=numbers[0];
    /* Criei uma variável e vou atribuir á variavel min o valor do primeiro elemento do vector, posição zero [0]*/
    for(int i=1; i<size; i++){
        /*int i=1 porque a variavel min vai tomar o valor do vector na posição zero [0] pelo que vou começar uma posição á frente, ou seja i=1*/
        if(numbers[i] < min){
            min = numbers[i];
        }
    } 
    return min;
}

int getMax(int numbers[], int size){
    //Função para encontrar o máximo valor.
    int max = numbers[0];
    /* Criei uma variável e vou atribuir á variavel max o valor do primeiro elemento do vector, posição zero [0]*/
    for(int i=1; i<size;i++){
        /*int i=1 porque a variavel min vai tomar o valor do vector na posição zero [0] pelo que vou começar uma posição á frente, ou seja i=1*/
        if(numbers[i] > max){
            max = numbers[i];
        }
    } 
    return max;
}
//SOLUÇÃO COM UMA ÚNICA FUNÇÃO PARA OBTER VALOR MAXIMO E  VALOR MINIMO, UTILIZANDO POINTERS.

void getMinAndMax(int numbers[], int size, int* min, int* max){
    /* Esta função vai executar o mesmo trabalho que as duas funções anteriores. 
    Esta função vai receber o min e max como pointers(de endereços), isto quer dizer que esta função  vai modificar os valores armazenados naqueles dois endereços. Queremos retornar dois valores desta função, vamos ter que passar estes dois valores por referencia(pointers) o que quer dizer que vamos ter que passar o endereço destes dois valores. Depois esta função vai mudar os valores armazenados nos dois endereços. Quando a função getMinAndMax atribui o valor maximo e minimo, a main function do (c++), esta main function vai ter acesso aos dois valores armazenados nos endereços de referencia.
    Os int*min e int*max vão receber os pointers dos valores minimo e maximo. 
    Ao utilizar os pointer vamos alcançar o objectivo de esta função retornar multiplos valores.
    */
   for(int i=1; i<size; i++){
        if(numbers[i] > *max){
            *max = numbers[i];
            /*    *max - Tivemos que des-referenciar este pointer, para obtermos o respectivo valor  */
        }
        if(numbers[i] < *min){
            *min = numbers[i];
            /*    *min - Tivemos que des-referenciar este pointer, para obtermos o respectivo valor  */
        }
    } 
}


int main(){

    int numbers[5]={5, 4, -2, 29, 6};
    /*
    cout << "Min is " << getMin(numbers, 5) << endl; 
    /* Passei como parametros da função, o vector numbers,e o valor do comprimento do vector que é 5.  */

    // cout << "Max is " << getMax(numbers, 5) << endl; 

    //--------------------------------------------------------------//

    int min = numbers[0];
    int max = numbers[0];

    getMinAndMax(numbers, 5, &min, &max);
    /* Invocamos/chamamos a função.  &min &max são PASSAGENS DE PARAMETROS POR REFERENCIA, quer dizer ao passarmos um endereço de uma variável para a função, neste caso passamos os endereços das variaveis min e max. 
    Se não passarmos um endereço, a função vai criar uma cópia, e qualquer alteração que a função faça nessa cópia não vou poder ter acesso a essas alteraçõees na main function do c++ ( ou seja com a passagem por referenca o valor da variavel vai ser alterado na main function do c++) */
    cout << "Min is :" << min << endl;
    cout << "Max is :" << max << endl;





    system("pause>0");
    }