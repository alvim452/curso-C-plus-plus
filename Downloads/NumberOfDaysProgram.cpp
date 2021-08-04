#include <iostream>
using namespace std; 

//SWIT CHCASE:

int main(){

    /*ano bissxto regra calculo: (year % 4 == 0 && year % 100 !=0 || year % 400 == 0 ) ano com 366 dias e o mês fevereiro tem 29 dias.*/

    int year, month;
    cout <<"Year, month; ";
    cin>> year >>month;
     
    switch (month){

         
         //operador ternário
        case2:(year % 4 == 0 && year % 100 !=0 || year % 400 == 0 )? cout << "29 days month": cout << "28 days month";break;
         case 4:
         case 6:
         case 9:
         case 11:  cout <<"30 days month.";break; /*Este break vai cobrir os meses 4 6 9 11, que tem 30 dias.*/
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12: cout <<"31 days month.";break; /*Este break vai cobrir os meses 1 3 5 7 8 10 12, que tem 31 dias.*/
         default: cout <<" Not valid!";
               

    }




    system("pause<0");
} 