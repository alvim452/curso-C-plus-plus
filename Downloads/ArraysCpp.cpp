#include <iostream>
#include<list>  
using namespace std;

//ARRAY - TIPO DE COLECÇÃO QUE ARMAZENA VALORES NA MEMÓRIA DE UMA FORMA CONTINUA.(VANTAGEM-fica mais RÁPIDO para acessar aos elementos).Uma vez criado um array(de um determinado tamanho) não posso acrescentar mais elementos(DESVANTAGEM), não posso alterar o tamanho desse array. O unico modo para acrescentar mais elementos, é criar um array maior e copiar o array anterior, e fico ainda com espaço para acrescentar mais elementos neste novo array.
//DYNAMIC ARRAY permite que o utilizador possa defenir o tamanho do array. 

int main(){

    //total, average, inTwoYears
    /*
    float month1 = 100;
    float month2 = 220;
    float month3 = 300;
    float month4 = 0;
    float month5 = 200;
    float month6 = 250;
    */

    int size;
    cin >> size;
    float monthArray[size];//NÃO É POSSIVEL DÁ ERRO

    float monthArray[12]; // ={100, 220, 300, 0, 200, 250};//O 1º index vai ser zero, index zero. //0  //1  //2 //3 //4  //5
    //O computrador vai reservar 12 espaços de memoria uns atras dos outros de uma forma seguida e sequencial, para armazenar os valores.

   /* cout << "Enter amount: ";
    cin >> monthArray[0];
    monthArray[0];
    monthArray[0];
    monthArray[0];
    monthArray[0];
    monthArray[0];*/


    float total =0;
    for(i=0; i<=11; i++){
        cout << "Enter amount for month " << i+1 << ". "; //enter amount for month 1:
        cin>> monthArray[i];
        total +=monthArray[i];      //somatório
    }

    //float total =month1 + month2 + month3 + month4 + month5 + month6;
    //float total =monthArray[0] + monthArray[1] + monthArray[2] + monthArray[3] + monthArray[4] + monthArray[5];
    float average = total/12;
    float inTwoYears = average*24;

    cout << "total = " << total << endl;
    cout << "average = " << average << endl;
    cout << "inTwoYears = " << inTwoYears << endl;
    

    
    
    


    system("pause>0");
}