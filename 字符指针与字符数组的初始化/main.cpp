#include <cstring>
#include <cstdio>
#include <cstdlib>

int main()
{
    char *p = "hello";//把字符串常量的首地址赋给p
    char c[10] = "hello";
    c[0] = 'H';
//    p[0] = 'H';//不可以堆常量区数据进行修改，只可访问
    printf("c[0]=%c\n",c[0]);
    printf("p[0]=%c\n",p[0]);
    p="world";//将常量数据"world"的地址赋给p
//    c="world";//不可改变
//    puts(p);
    puts(c);
    return 0;
}