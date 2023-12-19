#include <iostream>
using namespace std;

int main(){
    int i = 1,total=0;
    while (i <= 100)
    {
        total += i;
        i++;
    }
    cout << "total = " << total << endl;
    return 0;
}