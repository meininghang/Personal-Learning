#include <iostream>
using namespace std;

//BMI Caculator
int main(){
    
    float bmi,weight,height;
    cout << "Weight(kg), height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }else{
        if (bmi > 25)
        {
            cout << "Overweight" << endl;
        }else{
            cout << "Normal weight" << endl;
        }
    }
    cout << "Your bmi is " << bmi << endl;

    return 0;
}