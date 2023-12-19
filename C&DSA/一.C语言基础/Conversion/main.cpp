#include <stdio.h>

int main()
{
    //int i = 123;//十进制
    //int i = 0173;//八进制输入，0代表八进制
    int i = 0x7b;//十六进制输入，0x代表十六进制
    printf("%d\n",i);//十进制
    printf("%o\n",i);//八进制
    printf("%x\n",i);//十六进制
    return 0;
}