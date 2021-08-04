#include <iostream>
#include<list>  
using namespace std;

//INHERITANCE - HERIDATERIEDADE

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
          
         SubscribersCount++;   //ATRIBUTO
     }
     void UnSubscribe(){
        
         if(SubscribersCount > 0)  //Para nãr resultados negativos.
              SubscribersCount--;  //ATRIBUTO
     }
     void PublishedVideo(string title){
        
         PublishedVideoTitles.push_back(title);   //ATRIBUTO
     }
 };

 class CookingYoutubeChannel : public YoutubeChannel{
     /* : CookingYoutubeChannel: public youtubeChannel.. quer dizer que a classe cooking herda tudo da classe BASE(YoutubeChannel), ou seja a nova classe CookingYoutubeChannel vai ter tudo o que a classe BASE tem. Os : dois pontos no meio das duas classes, promove o parentesco entre as duas classes.
     O PUBLIC quer dizer que tudo o que é PUBLICO na classe BASE vai ser também PUBLICO na classe DERIVADA. Aproveitar ou reaproveitar determinadas partes(métodos) de uma classe para definir outras classes.*/
     public:
     CookingYoutubeChannel(string name, string ownwerName) : YoutubeChannel(name, ownerName){

     }

 };

int main(){

CookingYouTubeChannel ytChannel("Amy´s Kitchen", "Amy")
ytChannel.PublishedVideo("Apple pie");
ytChannel.PublishedVideo("Chocolate cake");
ytChannel.getinfo();


YouTubeChannel ytChannel("CodeBeauty", "Saldina"); 
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