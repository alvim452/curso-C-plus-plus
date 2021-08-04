#include <iostream>
using namespace std;  

//SWITCH CASE STATEMENT -  usada quando uma variavel pode assumir vários diferentes valores.Neste caso especifico char pode assumir os valores de: + - * / % ou um outro valor não previsto, que o utilizador pretenda utilizar.


int main(){

    float num1, num2;
    char operation;
    cout<<"**CodeBeauty calculator**";
    cin >> num1 >> operation >> num2;

    switch(operation){
        case '-': cout<< num1<<operation<<num2<<"=" <<num1-num2; break;
        case '+': cout<< num1<<operation<<num2<<"=" <<num1+num2; break;
        case '/': cout<< num1<<operation<<num2<<"=" <<num1/num2; break;
        case '*': cout<< num1<<operation<<num2<<"=" <<num1*num2; break;
        case '%': //A operação % só pode ser executada com numeros inteiros e nós defenimos num1 e num2 como float (reais).

           bool isNum1Int, isNum2Int;  //criamos duas variaveis booleanas(verdadeiro ou falso) que vão nos dizer se as variaveis num1 e num2 são inteiras??

           isNum1Int = ((int)num1 == num1); //A 2ª parte da expressão:(int)num1 quer dizer por favor tente converter a variavel float num1 numa variavel inteira num1 a seguir vai comparar se a variavel num1 é igual ao valor inicial da  variavel num1  //exemplo: 5==5.0 true; outro exemplo 5==5.7 false //A 1ª parte da expressão atribui o resultado da operação/ expressão ((int)num2 == num2); á variavel isNum1Int.//resultado verdadeiro ou falso.
           isNum2Int = ((int)num2 == num2);

           if(isNum1Int && isNum2Int){  //(isNum1Int == true && isNum2Int == true) ou seja true=true & true=true.
               cout << num1 << operation <<num2 <<"="<< (int)num1 % (int)num2;
           }else {cout << "Not valid!";break;
                 }
        default:cout <<"Not valid operation!" <<endl;

    //break temos que colocar sempre o break á frente de cada uma das condiçoes senão o programa irá executar todas as condições até encontrar um break.
        
    }

    system("pause<0");
} 