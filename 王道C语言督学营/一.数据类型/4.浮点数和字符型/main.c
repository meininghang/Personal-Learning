#include <stdio.h>

int main()
{
    float f = 3e3;// e代表10的幂次,占用4字节空间
    printf("%.3f\n",f); 

    char c = 'a';//占用1字节空间
    printf("%c\n",c);
    printf("%d\n",c);
}