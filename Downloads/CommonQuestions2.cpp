#include<iostream>
using namespace std;

void myFunction(){
    int* ptr= new int[5];
    //Dynamic memory you have to realease that memory with delete.
    ptr[2]=10;
    cout << "Hi, I am = " << ptr[2];
    //delete ptr; error because you have to delete am array: delete[]ptr
    delete[] ptr;
}



int main(){

    myFunction();//resultado: Hi, I am = 10



    system("pause>0");
    return 0;
}