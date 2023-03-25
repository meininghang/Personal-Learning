//全局变量，在函数外定义的变量叫全局变量

#include <cstdio>

int i = 10;
int main()
{
    printf("%d\n",i);
    int i =5;//此时i是main函数中的局部变量
    printf("%d\n",i);
    return 0;
}