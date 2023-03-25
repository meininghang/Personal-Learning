#include <cstdio>

void change(int **p, int *pj)//二级指针变量
{
    *p = pj;
}

int main()
{
    int i = 10;
    int j = 5;
    int *pi;
    int *pj;
    pi = &i;
    pj = &j;
    printf("i=%d,*pi=%d,*pj=%d\n",i,*pi,*pj);
    change(&pi,pj);
    printf("i=%d,*pi=%d,*pj=%d\n",i,*pi,*pj);
    return 0;
}