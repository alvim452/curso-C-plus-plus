#include <iostream>
using namespace std;

//Thanks! Structure members are public by default, and class members are private 🤗🤗.

struct Smartphone{ 
     /*Esta estrutura é uma BLUE-PRINT.Como é que podemos criar uma variavel do tipo Smarphone.*/
    string name;
    int storageSpace;
    string color;
    float price;
};

struct Person{
    /*Esta estrutura é uma BLUE-PRINT.Como é que podemos criar uma variavel do tipo Person.*/
    string name;
    int age;
    Smartphone smartphone;    //Vai buscar dados da variavel smartphone.O utilizador escolheu o smartphone.

};

void printSmartphoneInfo(Smartphone smartphone){//Criamos função printSmartphone().
    cout << "name: " << smartphone.name << endl;
    cout << "storageSapce: " << smartphone.storageSpace <<" GB" << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;
}



void printPersonInfo(Person person){ //Criamos função printPersonInfo().
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    printSmartphoneInfo(person.smartphone);
    //Reutilizamos o código.Reutilizamos a função void printSmartphone(), em que passamos o parametro smartphone que é smartphone escolhido pela Person p.
}


int main(){

    /*
    string name = "iphone 12";
    int storageSpace = 32;
    string color = "black";
    float price = 999.99;

    string name2 = "Samsung Galaxy S21 Ultra";
    int storageSpace2 = 64;
    string color2 = "gray";
    float price2 = 888.88;
    */

    Smartphone smartphone;//Passar uma ESTRUTURA,1ª variavel smartphone(s pequeno)
    smartphone.name = "iphone 12";
    smartphone.storageSpace = 32; 
    smartphone.color = "black";
    smartphone.price = 999.99;

    Smartphone smartphone2;//Passar uma ESTRUTURA-2ª variavel smartphone(s pequeno)
    smartphone2.name = "Samsung Galaxy S21 Ultra";
    smartphone2.storageSpace = 64; 
    smartphone2.color = "gray";
    smartphone2.price = 888.88;


    /* ESTAMOS A REPETIR O CODIGO COUT PARA AS DUAS VARIAVEIS SMARTPHONE
    cout << "name: " << smartphone.name << endl;
    cout << "storageSapce: " << smartphone.storageSpace << "GB" <<endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;

    cout << "name: " << smartphone2.name << endl;
    cout << "storageSapce: " << smartphone2.storageSpace <<"GB"<< endl;
    cout << "color: " << smartphone2.color << endl;
    cout << "price: " << smartphone2.price << endl;
    */
   printSmartphoneInfo(smartphone);
   printSmartphoneInfo(smartphone2);
   //Utilização da função printSmartphoneInfo(). 

   Person p;
   p.name="Saldina";
   p.age= 26;
   printPersonInfo(p);









     system("pause>0");
}

 /*
 O resultado vai ser: 
 name: Saldina
 age: 26
 name: Samsung Galaxy S21 Ultra   /* dados do smartphone escolhido por p
 storageSpace: 64GB
 color: gray
 price: 26888.88"
 */