#include <stdio.h>

int main()
{
    int i;
    char c;
    float f;

    int ret;

    ret = scanf("%d %c%f",&i,&c,&f);//混合输入时 %c之前加一个空格
    printf("i=%d,c=%c,f=%f\n",i,c,f);
}