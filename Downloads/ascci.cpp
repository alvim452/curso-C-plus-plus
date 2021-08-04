#include <iostream>
using namespace std;

int main(){
    //ACSII is American standard code for information serve para normalizar a resentação de caracteres no computador.Na tabela ACSII os caracteres são representados como numeros. ASCII utiliza 7 bites para representar cada caracter. Ao todo são 128 caracteres.

    cout<<(int)'a';// Casting operator; what is the of my letter a?
    cout<<int('a')<<endl;// resposta para ambas 97.
    cout<<int('A')<<endl;//resposta 65.

    cout<<char(65)<<endl; //resposta: A.

    char c1, c2, c3, c4, c5;//todas  as variaveis são do mesmo tipo.Podemo-las escrever utilizando uma só linha código.
    cout<<"Enter 5 letters: "; //Indroduzo a palavra: hello
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout<<"ACSII message: " <<int(c1) << " " << int(c2) << " " <<int(c3) <<" " <<int(c4) <<" " <<int(c5) <<" ";   //resposta ACSII Message: 104 101 108 108 111



    
     system("pause>0");
}