#include <iostream>
using namespace std;

template<typename T>
/*
TEMPLATE para usar generics, typename T, é o nome dos tipos, tambem pode aparecer como: Template<classe Type>  ou  Template<Typename Type>  */ 

// T  is calling GENERIC DATA TYPE using the same code with diferent data type. Determine what type of data i want to my functions to work.

//int &numero passagem de parametros por referencia altera o valor do parametro inicial, após esse parametro inicial ter passado pela função.

void Swap(T& a, T& b){ 
    /*USEI O TEMPLATE  defini uma  GENERIC FUNCTION, função que serve para todos os  tipos de variavel. Vantagem: com uma unica função serve para todos os tipos de dados.*/
     T temp = a; // T é uma variavel generica.
     a = b;
     b = temp;
}

//NÃO USEI O TEMPLATE

/*
void Swap(int& a, int& b){ 
     //NÃO USEI O TEMPLATE tive que definir uma  função para cada tipo de variavel (int).
     int temp = a;
     a = b;
     b = temp;
}
void Swap(char& a, char& b){  
    //NÃO USEI O TEMPLATE tive que definir uma  função para cada tipo de variavel (char).
     int temp = a;
     a = b;
     b = temp;
}
*/

int main(){

    int a= 5, b = 7;
    cout << a << " - " << b << endl;
    //Swap(a, b);      //invocando a função, sem a generic function.
    Swap<int>(a, b);  //invocando a função, usando a generic function. Não é obrigatorio <int>!
    cout << a << " - " << b << endl;   
    // vamos confirmar se foram realmente trocados os valores de A e B.//Resultado: 5 - 7 e 7 - 5, a função funcionou bem

    char c = 'c';
    char d = 'd';
    cout << c << " - " << d << endl;
    //Swap(c, d);       //invocando a função, sem a generic function.
    Swap<char>(c, d);  //invocando a função, usando a generic function. Não é obrigatorio <char>!
    cout << c << " - " << d << endl;   
    // vamos confirmar se foram realmente trocados os valores de C e D.//Resultado: c - d e d - c, a função funcionou bem

    

system("pause>0");

}