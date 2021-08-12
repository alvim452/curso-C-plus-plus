#include <iostream> 
using namespace std;

/*
POINTERS - Uma variavel é apenas um contentor, um contentor que armazena um certo valor. Um pointer é tambem um contentor, só que em vez de armazenar um valor armazena um ENDEREÇO, uma localização na memória.Vamos mostrar como se criam apontadores que vão segurar o endereço da variavel/contentor. 
 & - endereço fisico na memoria.Exemplo &n.
 * - pointers. Exemplo *ptr.
 MUITO IMPORTANTE - O pointer tem de ser do mesmo tipo da variavel para qual está a apontar (int n=5 e int* ptr=&n).
 */

int main(){

    int n=5;  
    /*A variavel é um contentor que armazena determinado valor. Como é um contentor, tem um endereço dentro da memória, um local fisíco.*/
    cout << n <<endl;//O resultado com esperado é: 5.

    cout << &n <<endl;
    /*Para sabermos o endereço da memoria onde se situa este contentor utilizamos o & colocado antes do nome da variavel, logo vai-nos dar a endereço fisico da variavel. O resultado vai ser:006FFD64, que é o endereço fisico onde se encontra localizado o contentor/variavel.Como se trata de um conjunto de letras e numeros difícil para os humanos recordar, é por causa disso que se usam nomes (minifullnames) nas variáveis*/

    int* ptr = &n; 
     /* A estrela * indica que criamos um pointer, seguido de um nome e vou-lhe atribuir o endereço da variavel n. Agora o pointer está apontado/segurar o endereço fisíco da variavel n*/

      cout <<ptr << endl; 
      /*Como esperado obtivemos o endereço onde estava a variavel n:006FFD64.O que indica que o pointer está a armazenar o endereço da variável n.   */

      cout << *ptr << endl;
      /* Para aceder ao valor da variavel armazenada naquele endereço, temos que des-referenciar o pointer, pelo que adicionamos uma * estrela ao nome da variável. Agora o resultado vai ser 5 */

      *ptr = 10 ;
      /*    *ptr - Quer dizer please acess to the memory location. Vou modificar o valor armazenado no endereço do pointer ptr. Acedo ao endereço de ptr e atribuo o novo valor pretendido que é 10 */

      cout << *ptr << endl;
      /*O resultado como esperado vai ser 10.  */

      cout << n << endl;
      /* Para saber qual o valor armazenado na varaiavel n. O resultado vai ser 10.Nunca dissemos que a variavel n armazena o valor 10. Mas armazenámos anteriormente o endereço  de n no pointer ptr, e alteramos o valor nesse endereço para 10 (*ptr=10.)  */

      /* ERRO COMUM
      int* ptr2;
      *ptr2=7;
       É um erro comum porque o pointer ptr2 não tem um endereço.Temos que criar uma variável do mesmo tipo (int) que o pointer: */
       int v;
       int* ptr2 = &v;
       /* o pointer vai apontar para o endereço fisíco da variavel v, e em seguida:*/
       *ptr2 =7;
       /* Vou atribuir áquele endereço o valor 7, atarvés da des-referenciação */
        cout << "v=" << v << endl;
        /* O resultado como esperado vai ser v=7 */

        /* APLICAÇÃO DOS POINTERS.
        A maior aplicação dos pointer são nas funções, na passagem por referencia para uma função, podemos obter valores multiplos dessa função. 
        Podemos tambem utilizar pointers combinados com vectores (arrays). 
        Podemos utilizar pointers para dynamic memory allocations.
        Podemos utilizar em OOP (objectos) podemos usar o pointer numa classe BASE com o objectivo para aceder a um objecto da classe DERIVADA.
        */



    system("pause>0");
}