#include <iostream>
using namespace std;

int main(){
    
    float a,b,c;
    cout << "a,b,c: ";
    cin >> a >> b >> c;
    if (a==b && b ==c)
    {
        cout<<"Equilateral triangle"<<endl;
    }else
    {
        if (a!=b && a!=c && b!=c)
        {
            cout<<"Scalene triangle"<<endl;
        }else
        {
            cout<<"Isoceles triangle"<<endl;
        }
        
    }
    
    return 0;
}