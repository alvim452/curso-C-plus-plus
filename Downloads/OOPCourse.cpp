#include <iostream>
#include<list>  //Incluimos por causa do atributo list, da classe youTubeChannel
using namespace std;

/*OOP-OBJECT ORIENTED PROGRAMING(Programação orientada para objectos) Representam objectos reais em programação, vão ser representados por atributos e pelo seu comportamento. O conceito mais importante em OOP são CLASSES e OBJECTOS. A CLASSE representa uma impressão digital, um template. Um OBJECTO representa um exemplo de uma classe, uma instanciação dessa classe. Exemplo: classe pode ser fruta e um objecto dessa classe pode ser uma banana uma pera uma laranja etc.Uma Classe pode ser um carro e um objecto pode ser um Volvo, um Ford, um Volksvagem, um BMW etc.
Uma classe tem atributos e comportamentos.  A classe carro tem como ATRIBUTOS: nome, preço,velocidade, cor etc. A classe carro tem como COMPORTAMENTOS: conduzir, travar, mudar cor.
 CLASSE é um data type, o usuario/programador é que vai definir o tipo de data type,que vai permitir representar um objecto real em programação(int, float, bool etc).No caso abaixo vou querer reprentar a CLASSE youtubechannel. Tem como atributos que vão ser representadas por variaveis: name, ownerName, subscriberCout, PublishedVideoTitles       */

 class YouTubeChannel{
     public:  //vai tornar todos os atributos desta classe acessiveis, outside/de fora da classe. Se não colocarmos PUBLIC vão ser considerados PRIVATE e só são acessiveis por dentro da classe YoutubeChannel. Minuto 7h 35m 30s do video c++  full course codebeauty*/
     string Name;
     string OwnerName;
     int SubscriverCount;
     list<string>PublishedVideoTitles;
     /*Defenimos 4 ATRIBUTOS/propriedades, da classe YouTubeChannel*/
 };

int main(){

YouTubeChannel ytChannel;
/* vamos criar um objecto/instanciar da classe YouTubeChannel.Primeiro colocamos o nome da classe (YoutubeChannel) e a seguir o nome da variavel(ytChannel)*/

ytChannel.Name ="CodeBeauty";
ytChannel.OwnerName = "Saldina";
ytChannel.SubscriverCount =1800;
ytChannel.PublishedVideoTitles ={"C++ for beginners video 1", "HTML & CSS Video 1", "C++ OOP video 1"};
/*Acessamos aos atributos da classe e agora atribui valores ás propriedades/atributos da classe YouTubeChannel. Ao colocarmos o nome do objecto com um ponto á frente aparecem imediatamente todos os atributos da classe(Porque a classe é PUBLIC */

//Vamos agora escrever para fora(write_out) a informação aramazenada dentro das propriedades.

cout << "Name: " << ytChannel.Name <<endl;
cout <<"OwnerName: " << ytChannel.OwnerName <<endl;
cout <<"SubscriversCount:" << ytChannel.SubscriverCount <<endl;
cout << "Videos" <<endl;     //Dar um aspecto grafico de separação.
//cout << "PublishedVideoTitles: " << ytChannel.PublishedVideoTitles <<endl;
//Este atributo é uma lista, por isso vou criar um loop. 
for(string videoTitle: ytChannel.PublishedVideoTitles){
    cout << videoTitle <<endl;
    /* string pois o valor do atributo PublishedVideoTitles é do tipo string , vou dar um nome VideoTitle,e a seguir vou especificar a lista onde eu quero fazer a interação:ytChannel.PublishedVideoTitles*/
}



system("pause>0");

}