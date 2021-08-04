#include <iostream>
using namespace std;

/*
What is the smallest contry?
1. USA 
2. Indian
3. Vatican City
choose 1-3: 3
Correct!

What´s the biggest animal in the world?
1.Elephant
2. Blue Whale
3. Great white Shark
Choose 1-3: 3
Incorrect!

How many elements are there in the periodic table?
1. 118 elements
2. 119 elements
3. 120 elements
Choose 1-3:
*/

string questions [3] ={"What´s the biggest animal in the world? ", "What´s the biggest animal in the world? ", "How many elements are there in the periodic table? "};
string country [3] = {"USA", "India", "Vatican city"};
string animal [3] = {"Elephant", "Blue Whale", "Great white Shark"};
int periodicTable [3] = {118, 119, 120};

int answer;

int main(){
  

for(int k=1; k<4; k++){
    cout << questions[k]<< endl;
    for(int i=1; i<4; i++){
            cout << i << ". " << country[i] << endl;
    } 
  }
    cout << "Choose 1-3: ";
    cin >> answer;
    if(answer==3){
        cout <<"Correct!";
        }else{
         cout <<"Incorrect!";
        }
        
    quiz.question1("Questions[]")

    system("pause>0");
}