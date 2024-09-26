#include <stdio.h>

int main()
{
    int i=1;
    int total = 0;

    while (i < 101)
    {
        total += i;
        i++;
    }
    printf("%d\n",total);
}