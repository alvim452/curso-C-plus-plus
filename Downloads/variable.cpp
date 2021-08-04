#include <iostream>
using namespace std;

int main(){

    //float annualSalary=50000.99; aqui atribuimos um valor á variavel annualSalary
    float annualSalary;
    cout <<"Please enter your annual salary!";
    cin >> annualSalary;
    float monthlySalary=annualSalary /12;
    cout <<"Your monthy salary is " << monthlySalary <<endl;
    cout <<"In 10 years you will earn " << annualSalary * 10;  //aqui  não criamos uma variavel para conter o valor do salario em 10 anos.
/*-----------------------------------------------------------*/
    



    system("pause>0");
}