#include <stdio.h>

int main()
{
    int i = -1;
    int j;
    // j = i++ > -1;// j=i>-1; i++
    // printf("i=%d, j=%d\n",i,j);

    j = ++i > -1;
    printf("i=%d, j=%d\n",i,j);

    printf("%d\n",sizeof(j));
}