#include <stdio.h>

int main()
{
    int i;
    while (scanf("%d",&i) && i != 9999)
    {
        if (i > 3 && i < 10)
        {
            printf("i 在 3 和 10 之间\n");
        }else{
            printf("i 不在 3 和 10 之间\n");
        }
        
    }
    return 0;
    
}