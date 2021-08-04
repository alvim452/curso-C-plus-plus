#include <iostream>
#include<list>  
using namespace std;

//ENCAPSULAMENTO - Refere que as propriedades/atributos da classe não devem ser PUBLIC, devem ser PRIVATE(PRIVATE-não podem ser acessados de fora da classe) e a maneira de modificar os valores que guardámos dentro das propriedades/atributos, é usando MÉTODOS para expor e dar acesso ao utilizadora esses propriedades/atributos, obedecendo ás regras dessses métodos, o utilizador pode modificar os valores que estão aramazenadas  nas propriedades/atributos.

 class YouTubeChannel{       //Definimos a CLASSE
private:  
/*ENCAPSULAMENTO- O utilizador não tem acesso directo a estas propriedades/atributos (PRIVATE).*/
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string>PublishedVideoTitles;
public:     
     YouTubeChannel(string name, string ownerName){    //CONSTRUTOR dentro da classe.  
         Name = name;
         OwnerName = ownerName;
         SubscribersCount = 0;
     }

    void GetInfo(){  //Método da classe
         cout << "Name: " << Name <<endl;
         cout <<"OwnerName: " << OwnerName <<endl;
         cout <<"SubscriversCount:" << SubscribersCount <<endl;
         cout << "Videos" <<endl;    
         for(string videoTitle:PublishedVideoTitles){
         cout << videoTitle <<endl;
         }
     }
     void Subscribe(){
           /*criei/expus um método:  void Subscibe(), para o utilizador poder modificar a propriedade/atributo subscribe(), que está encapsulada é privada, pelo que o utilizador não tem acesso directo ao atributo, a não ser através deste método*/
         SubscribersCount++;   //ATRIBUTO
     }
     void UnSubscribe(){
         /*criei/expus um método: void UnSubscribe(), para o utilizador poder modificar a propriedade/atributo Unsubscribe(), que está encapsulada é privada, pelo que o utilizador não tem acesso directo ao atributo, a não ser através deste método.*/
         if(SubscribersCount > 0)  //Para nãr resultados negativos.
              SubscribersCount--;  //ATRIBUTO
     }
     void PublishedVideo(string title){
        /*criei/expus um método: void PublishVideo(), para o utilizador poder modificar a propriedade/atributo PublishVideoTitle(), que está encapsulada, é privada pelo que o utilizador não tem acesso directo a não ser através deste método.*/ 
         PublishedVideoTitles.push_back(title);   //ATRIBUTO
     }
 };

int main(){


YouTubeChannel ytChannel("CodeBeauty", "Saldina"); 
//ytChannel.PublishedVideoTitles.push_back("C++ for beginners video 1");
//ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
//ytChannel.PublishedVideoTitles.push_back("C++ OOP video 1");
//ytChannel.SubscribersCount = 1000000;
ytChannel.PublishedVideo("C++ for beginners video 1"); //Chamei o método
ytChannel.PublishedVideo("HTML & CSS Video 1");       //       ||
ytChannel.PublishedVideo("C++ OOP video 1");         //        ||
ytChannel.Subscribe();                              //         ||
ytChannel.Subscribe();                             //          ||
ytChannel.Subscribe();                            //           ||
ytChannel.UnSubscribe();                         //            |||                          


YouTubeChannel ytChannel2("AmySings", "Amy");     //Criei o 2ºObjecto

ytChannel.GetInfo();  //Invocamos/chamamos um método do obj1(ytChannel).
ytChannel2.GetInfo();//Invocamos/chamamos um método do obj2(ytChannel2) 




system("pause>0");

}