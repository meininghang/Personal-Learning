#include <stdio.h>

int main()
{
    int i, total;

    for (i = 1,total = 0; i < 101; i++)
    {
        if (total > 2000)
        {
            break;//跳过本次循环
        }
        
        total += i;
    }
    printf("%d %d\n",total,i);
    
}