#include <iostream>
using namespace std;  


//PARAMETROS OU ARGUMENTOS -Por vezes as funções precisam de receber valores ou variaveis. para cumprir determinada tarefa com esses valores.

void introduceMe(string name, string city, int age=0){
    cout <<" My name is " << name << endl;
    /* Aqui fazemos a DECLARAÇÃO e a DEFINIÇÃO da função; age=0 default parameters que significa que eu não tenho que passar este prametro mais nenhuma vez. MUITO IMPORTANTE: O DEFAULT parametrer tem de ser sempre obrigatoriamente o ultimo na lista dos parametros nos argumentos de entrada da função. No video 6h 6m 57s,(string name, string city="default", int age)NÃO VAI FUNCIONAR; e se fizermos (string name, string city="default", int age=0), VAI FUNCIONAR porque já tenho um default parameter na ultima posição(age=0) da lista de parametros assim já posso criar um default parameter para city="default" e se quizer tambem para string name="default"; RESUMINDO: não posso atribuir um default value a um parametro intermedio da função, se nao atribuir um default parameter ao último argumento da função, na lista dos parameters da função*/

    cout << "I am from " << city << endl;
    //cout << "I am " << age << "years old" << endl;
    if(age !=0){
        cout << "I am " << age << "years old" << endl;
    }/* Se a idade for diferente de zero(condição verdadeira) é que escreve a linha abaixo. Se a idade for age=0 não escreve esta linha*/
}

int main(){

     //2º
    //introduceMe("Saldina", " Mostar", 25);

   // introduceMe("Anna", "NY");  //Não passei o argumento age.Logoa //função por defeito vai assumir por defeito age=0.
    //CHAMADA da função e passagem de varios parametros.

    //3º- Posso deixar o utilizador introduzir os parametros.
    string name1, city1;
    int age1;
    cout << " Name: ";  //Tom
    cin >> name1;      // Na definição da função este parametro: name.
    cout << "City:";  //NY
    cin >> city1;     //// Na definição da função este parametro: city.
    cout << "Age:";  //22
    cin >> age1;    // Na definição da função este parametro: age.

    introduceMe(name1, city1, age1);  
    /*Aqui fas-se a Chamada da função; Não sou obrigado a usar o mesmo nome dos parametros na chamada da função, iguais aos nome dos parametros na definição da função. Tem é de ser do mesmo tipo: string int etc */


     system("pause<0");
}  

/*
1º RESULTADO:
My name is Saldina
I am from Mostar
I am 25 years old
My name is Anna
I am from NY
I am 0 years old      //DEFAULT PARAMETERS AGE=0

2º RESULTADO:
My name is Saldina
I am from Mostar
I am 25 years old
My name is Anna
I am from NY  
//DEFAULT PARAMETERS if(AGE !=0), não escrece a linha da idade.

3º RESULTADO:
My name is Tom
I am from NY
I am 22 years old
 
*/
