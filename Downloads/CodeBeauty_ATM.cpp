#include <iostream>
using namespace std;


void showMenu(){
    cout << "********** MENU**********" << endl;
    cout << " 1. Check balance"  << endl;
    cout << " 2. Deposit" << endl;
    cout << " 3. Widthdraw" << endl;
    cout << " 4. Exit" << endl;
    cout << "**************************" << endl;
}

int main(){

    //check balance, deposit, withraw, show menu

    int option;
    double balance = 500;

    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");  //para limpar a consola.

    switch (option){
        case 1: cout << "Balance is: " << balance << "$" << endl; break;
        case 2: cout << "Deposit amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
        case 3: cout << "Widthdraw amount: ";
        double widthdrawAmount;
        cin >> widthdrawAmount;
        if( widthdrawAmount <=balance)
           balance -= widthdrawAmount;
        else
           cout << " Not enough money" << endl;
        break;
    default:cout << "Not valid!" << endl;
        
    }
    }while(option !=4);


    system("pause>0");
}