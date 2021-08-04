#include <iostream>
#include<list>  
using namespace std;

//VER O OOPCourse2.cpp, esta é a versão limpa sem comentarios nem anotações.

 class YouTubeChannel{       //Definimos a CLASSE
     public:  
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string>PublishedVideoTitles;
     
     YouTubeChannel(string name, string ownerName){    //Construtor dentro da classe.  
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
 };

int main(){


YouTubeChannel ytChannel("CodeBeauty", "Saldina"); 
ytChannel.PublishedVideoTitles.push_back("C++ for beginners video 1");
ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
ytChannel.PublishedVideoTitles.push_back("C++ OOP video 1");


YouTubeChannel ytChannel2("AmySings", "Amy");     //Criei o 2ºObjecto

ytChannel.GetInfo();  //Invocamos/chamamos um método do obj1(ytChannel).
ytChannel2.GetInfo();//Invocamos/chamamos um método do obj2(ytChannel2) 




system("pause>0");

}