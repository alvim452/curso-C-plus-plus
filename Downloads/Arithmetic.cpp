#include <iostream>
using namespace std;  


//EXAMPLE OF NESTED(aninhada) FOR LOOP WITH A WHILE LOOP.
/*The student will put 3 grade (avaliações com valores entre 1 e 5) e vamos calcular a média das avaliações.*/


int main(){

    int grade, sum=0;

    for(int i=0; i<3; i++){
       do{
           cout << "Enter grade " <<i+1 << " : ";
           /*porque a variavel i começa em zero,0, no loop for. Não faz sentido dizer ao aluno para introduzir a grade 0, logo começa em 1*/

           cin >> grade;
       } while(grade<1 || grade >5);/* Manda repetir ao aluno que introduza um novo valor, caso ele tenha introduzido um valor superior a 5 ou inferiore a 1, funciona com uma msg de erro*/
       sum +=grade;
    }

    cout << " Sum = " << sum << endl;
    cout << " Average grade = " << (float)sum/3.0 <<endl;
    /* sum e 3 são inteiros e o resultado da divisão seria um inteiro. Para contornarmos este problema transformamos a variavel  inteira sum, numa variavel real (float)sum e/ou transformamos o divisor, 3, num real 3.0*  assim o resultado será um numero real (float) decimal.*/ 



system("pause<0");
} 