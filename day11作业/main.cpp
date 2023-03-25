#include <cstdio>
#include <cstdlib>

int main()
{
    int i;//申请空间大小
    scanf("%d\n",&i);//读入整数
    char *p;
    p = (char *)malloc(i);//申请内存空间
    char c;
    scanf("%c",&c);//去除缓冲区中的\n
    fgets(p, sizeof(p),stdin);
    puts(p);
    return 0;
}