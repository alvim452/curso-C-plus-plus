#include <iostream>
#include<list>  
using namespace std;

//POLIMORFISMO - Descreve a habilidade por exemplo de um objecto de ter multiplas formas, isso quer dizer que posso ter 2 ou mais objectos que herdam da mesma classe base, esses objectos podem ter metodos como mesmo nome mas com diferentes implementações, diferentes comportamentos.

 class YouTubeChannel{       //Definimos a CLASSE
private:  
     string Name;
     //string OwnerName;//inicialmente este atributo era PRIVATE
     int SubscribersCount;
     list<string>PublishedVideoTitles;
protected: //atributos podem ser acessados pelas classes DERIVADAS.
     string OwnerName;    
     int ContentQuality; //Nesta aula(POLIMORFISMO),novo atributo.
public:                       
     YouTubeChannel(string name, string ownerName){    
         Name = name;                  
         OwnerName = ownerName;        
         SubscribersCount = 0;        
         ContentQuality = 0;         
        }

    void GetInfo(){      //Método, GetInfo, da classe YoutubeChannel.
         cout << "Name: " << Name <<endl;
         cout <<"OwnerName: " << OwnerName <<endl;
         cout <<"SubscriversCount:" << SubscribersCount <<endl;
         cout << "Videos" <<endl;    
         for(string videoTitle:PublishedVideoTitles){
         cout << videoTitle <<endl;
         }
     }
     void Subscribe(){
         SubscribersCount++;   //Atributo
     }
     void UnSubscribe(){
         if(SubscribersCount > 0)     //Para nãr resultados negativos.
              SubscribersCount--;    //ATRIBUTO
        }
     void PublishedVideo(string title){
         PublishedVideoTitles.push_back(title);   //ATRIBUTO
        }
     void CheckAnalytics(){  //Nesta aula(POLIMORFISMO) novo método.
             if(ContentQuality < 5){
             cout << Name << "has bad quality content." << endl;
             }else{cout << "has great quality content." << endl;
             }
         }// criei um novo método para aferir qualidade através da contagem do numero de ContenQuality.
};

 class CookingYoutubeChannel : public YouTubeChannel{
     public:
     CookingYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){
     }
     void Practice(){
         /*O mesmo método com uma diferente implementação relativamente ao método void Practice()subsquente(da classe SingersYoutubeChannel).Vêr linha 62 deste código.*/
         cout << OwnerName << " is practicing cooking, learning new recipes,experimenting with spices...." << endl;
         ContentQuality++;
        }
    };
    class SingersYoutubeChannel : public YouTubeChannel{
     public:
     SingersYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){//Contrutor
     }
     void Practice(){
         /*O mesmo metodo com uma diferente implementação relativamente ao metodo void Practice()anterior(da classe CookingYoutubeChannel).Vêr linha 54 deste código.*/
         cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance...." << endl;
         ContentQuality++;
        }
    };

int main(){

CookingYoutubeChannel cookingYtChannel("Amy´s Kitchen", "Amy");
SingersYoutubeChannel singersYtChannel("JohnSings", "John");


cookingYtChannel.Practice();//métodos com o mesmo nome mas com diferentes implementações
singersYtChannel.Practice();
singersYtChannel.Practice();
singersYtChannel.Practice();
singersYtChannel.Practice();
singersYtChannel.Practice();
/*singersYtChannel tem 5 Practice() contra apenas 1 Practice() do cookingYtChannel.*/


YouTubeChannel* yt1 = &cookingYtChannel;
YouTubeChannel* yt2 = &singersYtChannel;

//cookingYtChannel.CheckAnalytics(); É igual a: YouTubeChannel* yt1= &cookingYtChannel;
//singersYtChannel.CheckAnalytics();É igual a:YouTubeChannel* yt2= &singersYtChannel;


/*Quero atribuir ao ponteiro yt1  a morada do  cookingYtChannel, nós podemos atribuir a um ponteiro (yt1) da classe Base uma morada da classe DERIVADA (cookingYtChannel). Um apontador da classe BASE pode apontar para uma variavel da classe DERIVADA*/ 

//Utilização de ponteiros na classe derivada e podemos armazenar num ponteiro da classe BASE. 
/* Criei apontadores da classe YouTubeChannel pode apontar para uma variavel das classes derivadas*/ 

yt1->CheckAnalytics(); //Resultado:Amy´s Kitchen has bad quality content
yt2->CheckAnalytics();      //Resultado:JohnSings has a great content.

//Invocamos o metodo CheckAnalytics()usando apontadores(yt1 e yt2) da classe Base(YouTubeChannel).O uso do simbolo -> usa-se quando invocamos métodos usando ponteiros.


                         


/* CONCLUSÃO- Penso que ao invocarmos um método atraves de apontadores será a mesma coisa que invocarmos atraves do objecto quero kisto dizer: yt1->CheckAnalytics(), sendo o yt1 o apontador de CookingYtChannel, será a mesma coisa que CookingYtChannel.CheckAnalytics().
POLIMORFISMO -Diferentes objectos podem ter métodos como mesmo nome, mas com diferentes implementações, diferentes comportamentos (dos métodos).*/


system("pause>0");

}