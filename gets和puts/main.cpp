#include <cstdio>

int main()
{
    char c[20];//字符数组的数组名里存的就是字符数组的起始地址,类型是字符指针
    fgets(c,20,stdin);//一次读取一行
    puts(c);//等价于printf
    return 0;
}