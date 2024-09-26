#include <stdio.h>

int main()
{
    int a = 4 + 5 * 2 - 6 / 3 + 10 % 4;
    printf("%d\n",a);
    scanf("%d",&a);
    printf("a=%d\n",a);
    while (a!=0)
    {
        printf("%d",a%10);
        a = a/10;
    }
    printf("\n");
    return 0;
}