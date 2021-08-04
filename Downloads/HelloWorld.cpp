#include<iostream>
using namespace std;  //para não termos de usar o cmd std::cout (console out)ou std::endl(end line)

int main(){
    cout << "Hello, World!"<<endl;
    string fruit = "apple";
    string fruits[5] = {"apple", "orange", "pear", "strawberry", "banana"};
    for(int i=0; i<5; i++){
        cout << fruits[i] << endl;
    }
    return 0;
}