#include <iostream>
using namespace std;  

int main(){

    //TERNARY OPERATOR(operador ternário)

    int hostUserNum, guessUserNum;
    cout << "Host enter a number: ";
    cin >> hostUserNum;
    system("cls");  //limpar o ecrã (console) para ocultar o numero introduzido pelo Host.
    cout << "Guest, guess the number!";
    cin >> guessUserNum;

   /* if (hostUserNum == guessUserNum){
        cout << "Correct!";
    }else{
        cout<< "Failed!";
    }*/

    (hostUserNum == guessUserNum)? cout << "Correct!": cout <<"Failed!";
    //verifique a condição inicial (?), se a condição resultar verdadeira executa a primeira parte do programa(cout<<"Correct!"), se a condição resultar falsa executa o que estiver a seguir aos(:)(cout<<"Failed!"), que é a segunda condição.




     system("pause<0");
} 