#include <iostream>
using namespace std;

int main(){

    char character='a';
    char gender = 'f';
    bool isOlderThnan18 = true;
    float average = 4.5;
    double balance = 45678945856;
    cout << "Size of int is " <<sizeof(int)  <<" bytes\n";
    //Size of int is 4 bytes =32 bites
    cout << "Int min value is " <<INT_MIN <<endl;
    //o primero bit é utilizado  para o sinal-
    // Int min value is (-1,-2,-3,..........,)-2147483648
    cout << "Int max value is " <<INT_MAX << endl;
    // Int max value is (0,+1,+2,+3,..........,)+2147483647 //tem menos um bit por causa do algarismo 0
    cout<< "Size of unsigned int is " <<sizeof(unsigned int) << "bytes\n";  
    //Size of unsigned int is 4 bytes = 32 bites // não utiliza nenhum bit para o sinal + ou -
    cout<<"UInt max value is " <<UINT_MAX<<endl;
    // UInt max value is 4294967295
    cout<< "Size of bool is " <<sizeof(bool) << "bytes\n";  
    //Size of bool is 1 bytes
    cout<< "Size of char is " <<sizeof(char) << "bytes\n";  
    //Size of char is 1 bytes
    cout<< "Size of float is " <<sizeof(float) << "bytes\n";  
    //Size of float is 4 bytes
    cout<< "Size of double is " <<sizeof(float) << "bytes\n";  
    //Size  of double is 8 bytes

     system("pause>0");
}