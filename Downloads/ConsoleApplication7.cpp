#include <iostream>
using namespace std;


//FUNÇOES RECURSIVAS, é um processo em que a função invoca/chama a própia função.

//Sum numbers between m-n.


//Função Recursiva
int recursive_sum(int m, int n){  //m=2, n=4, m=3,n=4  m=4,n=4
    if(m==n){  
        return m;
        /*sempre que trabalhamos com funções recursivas devemos ter sempre uma expressão BASE-CASE , que termine a função recursiva para não ir até ao infinito, dando um erro.*/
    }else{
        return m + recursive_sum(m+1, n);  //2+(3+(4))  //9
    }

}

int main (){
    
    /*
    int sum=0;
    int m=2, n=4;
    for( int i=m; i<=n; i++){
        sum += i;
    }
    cout << "Sum=" << sum;
    */

   int m=1, n =525;
   cout << "Sum = " << recursive_sum(m, n);


    system("pause>0");
}