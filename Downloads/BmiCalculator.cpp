#include <iostream>
using namespace std;  

int main(){

    //BMI calculator(body mass calculator - ind massa gorda)
    //BMI = weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal weight 18.5-24.9
    //Overweight > 25

    float weight, height, bmi;
    cout << "Weight(Kg), Height(m): ";
    cin >> weight >> height;
    bmi =weight /(height * height);
    if (bmi < 18.5){
        cout <<"Underweight" << endl;
    }else if (bmi > 25){  //se resultar negativa a condição anterior usamos else if para verificarmos uma nova condição.
        cout <<"Overweight" << endl;
    }else{
        cout <<"Normal weight" << endl;
    }
    cout << "your Bmi is: " << bmi;


    system("pause<0");
} 