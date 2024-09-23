#include <stdio.h>

int main()
{
    int i = 5;
    float j = i / 2;
    float k = (float)i / 2;//强制类型⇄转换
    printf("%.1f\n",j);
    printf("%.1f\n",k);
}