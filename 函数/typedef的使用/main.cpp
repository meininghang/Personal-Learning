#include <cstdio>
#include <cstdlib>
#include <cstring>


//结构体指针
typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu, *pstu;

typedef int INTEGER;

int main()
{
    stu s = {1001, "sss",'M'};
    pstu p;//结构体指针变量
    INTEGER i = 10;
    p = &s;//结构体是单独的一个变量,等价于stu *p;
    printf("%d,%d\n",i,p->num);
    return 0;
}



