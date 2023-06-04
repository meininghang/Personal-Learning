#include <iostream>
using namespace std;

int main(){
    int number;
    
    cout << "Pls enter whole number:";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "You have enetered even number." << endl;
    }
    else
    {
        cout << "You have entered odd number." << endl;
    }
    cout<<"Thanks."<<endl;
    return 0;
}