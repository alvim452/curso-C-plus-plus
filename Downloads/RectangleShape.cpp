#include <iostream>
#include <iomanip>
using namespace std;  


int main(){
    int height, width;
    cout << "Height: ";
    cin >> height;
    cout << " Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for(int h=0; h<height; h++){       //outer loop (vai controlar a altura do rectangulo)
        for(int w=0; w< width; w++){   //inner loop (vai controlar a largura do rectangulo)
            //cout << symbol;
            cout <<setw(3) <<symbol;
            /* A função:setw(3) atribui 3 espaços ao comprimento do campo de cada um dos caracteres (symbol) que vem a seguir á função. Esta função pertence á biblioteca que incluimos no cabeçalho #include<iomanip>*/
        }
        cout <<endl;  //espaço vazio no final de cada linha.
    }


    


system("pause<0");
} 