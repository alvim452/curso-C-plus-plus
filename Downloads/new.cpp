#include <iostream> 
using namespace std;

//MULTIPLE DIMENSION DYNAMIC ARRAYS.
//Video 9h 49m 50s codebeautyc++fullcourse.

/* IT´S A ARRAY OF ARRAYS,POINTER OF POINTERS  **TABLE. NEW (ALOCATE) implica um DELETE (DESALOICATE). If, for some reason, we loose the adress of the table, we not be able to acess all of the elements that we have creat in dynamic memory*/

int main(){


    int rows, cols;
    //quantas (rows) linhas(quantos arrays finais vai ter) e (cols)colunas(qual o comprimento/indices dos arrays finais), valores que definem a mesa.
    cout << rows << cols << endl;
    cin >> rows >> cols;

    int** table = new int*[rows];   //row - linhas
    /*int** table - pointer do array, que contem endereços dos arrays(TABLE).
    new int*[row] array of pointer, que tem os endereços dos arrays finais */
    for(int i=0; i < rows; i++){
        table[i] = new int[cols];
        /*enderecos dos arrays finais*/
    }
    table[1][2] = 88
    /* acesso a um elemento especifico da table.*/

    for(int i=0; i < rows; i++){
        delete [] table[i];
        //O delete faz-se por ordem inversa, do fim para o inicio: vai apagar /desalocar a memoria dos arrays finais.
    }
    delete[ table;];
    //vai apagar /desalocar a memoria do array que contem os arrays finais.

    table = NULL;
    //apagamos tudo, para prevenir eventuais crash´s ou problemas.





    system("pause>0");

}