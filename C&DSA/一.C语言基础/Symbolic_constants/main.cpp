#include <stdio.h>
#define PI 3+2 //符号产量

int main()
{
    int i = PI * 2;
    printf("i=%d\n",i);
    printf("i size = %ld\n",sizeof(i));
    return 0;
}