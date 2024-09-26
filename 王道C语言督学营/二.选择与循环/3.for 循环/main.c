#include <stdio.h>

int main()
{
    int i, total;

    for (i = 1,total = 0; i < 101; i++)
    {
        total += i;
    }
    printf("%d\n",total);
    
}