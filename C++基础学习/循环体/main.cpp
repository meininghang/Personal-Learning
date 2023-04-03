#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%3d",i);
    }
    printf("\n");
    printf("--------------\n");
    
    int x;
    scanf("%d",&x);
    while (1 < x)
    {
        if (x % 2 == 1)
        {
            x = 3 * x + 1;
            printf("%d\n",x);
            break;
        }else{
            x /= 2;
            printf("%d\n",x);
        }
    }
    
    return 0;
}