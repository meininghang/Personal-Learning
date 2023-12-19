#include <iostream>
using namespace std;

int main(){
    int  i,total=0;
    for (i = 1; i < 101; i++)
    {
        /*求解奇数之和*/
        // if (i%2==0)
        // {
        //     continue;
        // }
        //跳出循环体
        if (total > 2000)
        {
            break;
        }
        
        total += i;
    }
    cout << total << i << endl;
    return 0;
}