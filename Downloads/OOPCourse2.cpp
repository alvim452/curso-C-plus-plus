#include <iostream>
#include<list>  //Incluimos por causa do atributo list, da classe youTubeChannel
using namespace std;

//CONSTRUCTOR - Construtor é um método especial que vai ser invocada de cada vez que eu quiser criar um objecto de uma classe especifica.Existem 2 regras para os costrutores: 1º regra tem de ter o mesmo nome da classe; 2ª regra o construtor não tem,  return type. */

 class YouTubeChannel{  //Definimos a CLASSE
     public:  
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string>PublishedVideoTitles;//#include<list>

    //CONSTRUTOR- Fica dentro dos parentesis da classe. Neste construtor quero receber 2 parametros(string name e string ownerName). A seguir vou atribuir estes parametros as propriedades da classe(Name e OwnerName). 
     
     YouTubeChannel(string name, string ownerName){  //Definição CONSTRUTOR.
         Name = name;//Name vai ser igual ao que o usuario passar no parametro name do construtor.
         OwnerName = ownerName;//OwnerName vai ser igual ao que o usuario passar no parametro ownerName do construtor.
         SubscribersCount = 0;//Como vamos começar o contador igual a 0.
     }

     void GetInfo(){  //Definição da CLASS-METHOD.
         cout << "Name: " << Name <<endl;
         cout <<"OwnerName: " << OwnerName <<endl;
         cout <<"SubscriversCount:" << SubscribersCount <<endl;
         cout << "Videos" <<endl;    
         for(string videoTitle:PublishedVideoTitles){
         cout << videoTitle <<endl;
         }
     }
 };

int main(){

/*           Método sem utilização do construtor(ciar classe)
YouTubeChannel ytChannel;
ytChannel.Name ="CodeBeauty";
ytChannel.OwnerName = "Saldina";
ytChannel.SubscribersCount =1800;
ytChannel.PublishedVideoTitles ={"C++ for beginners video 1", "HTML & CSS Video 1", "C++ OOP video 1"};
*/

/*Objecto criado através do copy/paste(não é aconselhado este procedimento)
YouTubeChannel ytChannel2; 
ytChannel2.Name ="AmySings";
ytChannel2.OwnerName = "Amy";
ytChannel2.SubscribersCount =2000;
ytChannel2.PublishedVideoTitles ={"Jhonny B - Cover", "Lorelei - Cover"};
*/

//          Método utilizando o CONSTRUTOR(invocamos o construtor)
YouTubeChannel ytChannel("CodeBeauty", "Saldina");  //Criei o 1º Objecto
ytChannel.PublishedVideoTitles.push_back("C++ for beginners video 1");
ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
ytChannel.PublishedVideoTitles.push_back("C++ OOP video 1");
/* push_back é um metodo que vai acrescentar ao final da lista(PublishedVideoTitles) um novo elemento do tipo string*/

YouTubeChannel ytChannel2("AmySings", "Amy");     //Criei o 2ºObjecto

ytChannel.GetInfo();  //Invocamos/chamamos um método do obj1(ytChannel).
ytChannel2.GetInfo();//Invocamos/chamamos um método do obj2(ytChannel2) 

/*
  cout<< objecto 1 e cout<< do objecto 2, estamos a repetir o código, e para resolvermos isso vamos utilizar class method. A class method vai descrever o comportamento de uma classe.

cout << "Name: " << ytChannel.Name <<endl;
cout <<"OwnerName: " << ytChannel.OwnerName <<endl;
cout <<"SubscriversCount:" << ytChannel.SubscribersCount <<endl;
cout << "Videos" <<endl;    
for(string videoTitle: ytChannel.PublishedVideoTitles){
    cout << videoTitle <<endl;
}
cout << "Name: " << ytChannel2.Name <<endl;
cout <<"OwnerName: " << ytChannel2.OwnerName <<endl;
cout <<"SubscriversCount:" << ytChannel2.SubscribersCount <<endl;
cout << "Videos" <<endl;    
for(string videoTitle: ytChannel2.PublishedVideoTitles){
    cout << videoTitle <<endl;
}
*/
 




system("pause>0");

}