#include <stdio.h>

int main()
{
    int i, total;

    for (i = 1,total = 0; i < 101; i++)
    {
        if (i%2==0)
        {
            continue;//跳过本次循环
        }
        
        total += i;
    }
    printf("%d\n",total);
    
}