#include <stdio.h>

int main()
{
    int i;
    while (scanf("%d",&i)!=EOF)
    {
        if (i>0)
        {
            printf("i is bigger than 0\n");
        }
        else{
            printf("i is not bigger than 0\n");
        }
    }
    
}