#include <cstdio>

int main()
{
    int i = 5;//指针的本质就是地址
    int *p = &i;//&是取地址，指针变量的初始化一定是某个变量取地址
    printf("i=%d\n",i);//直接访问
    printf("*p=%d\n",*p);//间接访问
    return 0;
}