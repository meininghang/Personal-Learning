#include <cstdio>

//给结构体的类型起别名,以及结构体指针类型的别名

typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu, *pstu;

typedef int INTEGER;

int main()
{
    stu s={1001,"lele",'M'};
    pstu p;//stu *p1,则p1也是一个结构体指针
    INTEGER i = 10;
    p = &s;
    printf("i=%d,p->num%d\n",i,p->num);
    return 0;
}
