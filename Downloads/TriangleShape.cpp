#include <iostream>
#include <iomanip>
using namespace std;  


int main(){
    int lenght;
    cout << "Lenght: ";
    cin >> lenght;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for(int i=0; i<lenght; i++){  //outer for loop
        for(int j=0; j< i; j++){   //inner for loop
            cout << setw(2) << symbol;
            /* A função:setw(2) atribui 2 espaços ao comprimento do campo de cada um dos caracteres (symbol) que vem a seguir á função. Esta função pertence á biblioteca que incluimos no cabeçalho #include<iomanip>*/
            
        }
        cout <<endl;
    }
     cout << endl << endl;

     //Triangulo reverso(noutra posição)

    for(int i = lenght; i>=1; i--){
        for(int j=0; j< i; j++){
            cout << setw(2) << symbol;
        }
        cout<< endl;
    } 

    /*

       +
       + +
       + + +
       + + + +
       + + + + +

       + + + + +
       + + + +
       + + +
       + + 
       +
        
       */



    


system("pause<0");
} 