#include <stdio.h>

int main()
{
    int i = 5;
    float f = i/2;//此时i是整型,但是输出是浮点数格式
    float ff = (float)i/2;//此时i被强转为浮点数

    printf("%.1f\n",f);
    printf("%.1f\n",ff);
    return 0;
}