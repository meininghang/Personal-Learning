#include <stdio.h>

int main()
{
    int i=1;//i为假,下方逻辑与不会被执行
    i&&printf("you can't see me!\n");

    int j = 0;
    j||printf("you can't see me again!\n");
    return 0;
}