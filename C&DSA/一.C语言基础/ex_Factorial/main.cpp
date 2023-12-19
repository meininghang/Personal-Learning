#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i, result=1;
    for (i = 1; i < n+1; i++)
    {
        result *= i;
    }
    cout << "n 的阶乘等于 " << result << endl;
    return 0;
}