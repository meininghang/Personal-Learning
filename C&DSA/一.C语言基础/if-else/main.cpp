#include <iostream>
using namespace std;

int main(){
    int i;
    while (cin >> i && i != 9999)
    {
        if (i>0)
        {
            cout << "i is bigger than 0\n" << endl;
        }else{
            cout << "i is not bigger than 0\n" << endl;
        }
        
    }
    return 0;
}