#include <stdio.h>

int main()
{
    char c[10] = "hello";
    printf("%s",c);
    char e[20],f[20];
    scanf("%s%s",e,f);//不需要使用取地址符
    printf("%s%s",e,f);
    return 0;
}

