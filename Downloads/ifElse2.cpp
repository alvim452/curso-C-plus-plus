#include <iostream>
using namespace std;  

int main(){

    //User enters side lengts of a triangle (a,b,c)
    //Program should write out whether that is equilateral, isosceles or scalene
    
    float a, b, c;
    cout <<"Please enter the leng of the side 'A' of triangle! "<<endl;
    cout <<"Please enter the leng of the side 'B' of triangle! "<<endl;
    cout <<"Please enter the leng of the side 'C' of triangle! "<<endl;
    cin >> a >> b >> c;
    if (a==b && b==c){
        cout <<"Equilateral triangle";

    }else{if(a!=b && a!=c && b!=c){
        cout <<"Scalene triangle";
       }else{
           cout<<"Isosceles triangle";
       }

    }

    

    system("pause<0");
}