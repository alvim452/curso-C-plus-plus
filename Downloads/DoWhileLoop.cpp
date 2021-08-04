#include <iostream>
using namespace std;  

//No do+while, primeiro executamos (do) e a seguir verificamops a condição (while) true e a seguir tornamos a executar o (do) se a condição (while) estiver estabelecida.

int main(){

    int usersPin=1234, pin, errorCounter;
    //PIN VALIDATION.
    /* usersPin é o codigo correcto do pin, pin é o que o utilizador vai tentar introduzir e erroCounter é o numero de tentativas do usuario pra acertar no pin correcto (usersPin) */

    do {
        cout << "Enter the PIN: ";
        cin >> pin;
        if(pin != usersPin){
            errorCounter++;
        }
       
    }
    while(errorCounter < 3 && pin!=usersPin);

    if(errorCounter<3){ //O usuario acertou no pin
        cout <<"Loading...";
    }else{   //O usuario não acertou no pin e ultrapassou 3 tentativas.
        cout << "Blocked...";
    }




    system("pause<0");
} 