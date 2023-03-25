#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int i; //申请多大的空间
    scanf("%d\n",&i);
    char *p;
    p=(char *)malloc(i);//malloc申请空间单位是字节
    strcpy(p,"malloc success");
    puts(p);
    free(p);//释放空间
    p=NULL;//如果不把P值置为NULL，则称p为野指针
    return 0;
}