#include <iostream>
using namespace std;

int main(){
    
    int a = 20;
    int b = 10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}