#include <iostream>
#include <stdlib.h> 
using namespace std;

int main(){
    cout << 5 + 'a' <<endl;
    cout<< 5 / 2.0 <<endl;
    cout<< 5 % 2 <<endl;
    
    //++, --
    int counter = 9;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << counter2++ <<endl;
    cout << ++counter2 << endl;

    system("cls");

    return 0;
}