#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    char* p = "hello";//把字符串常量hello的首地址赋给p
    char c[10] = "hello";  //等价于strcpy(从c,"hello") 
    puts(p);
    puts(c);
    printf("--------------------\n");

    printf("c[0]=%c\n",c[0]);
    printf("p[0]=%c\n",p[0]);
    printf("--------------------\n");

    c[0] = 'H';//可以正常修改
    printf("c[0]=%c\n",c[0]);
    // p[0] = 'H';//无法进行修改,不可对数据区常量进行修改
    // printf("p[0]=%c\n",p[0]);
    printf("--------------------\n");

    // c = "world";//无法修改
    // puts(c);
    p = "world";//赋值world的地址
    puts(p);
    return 0;
}