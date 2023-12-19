#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b = 0;
    int backup_a = a;
    while (a)
    {
        //b = a % 10;
        
        b = a%10 + b*10;
        a /= 10;
    }
    if (backup_a==b)
    {
        cout << "此数是对称数" << endl;
    }else{
        cout << "此数不是对称数" << endl;
    }
    
    return 0;
}