#include <cstdio>
#include <cstdlib>
#include <cstring>


 void change(int** p, int* pj)
 {
    *p = pj;
 }

int main()
{
    int i = 10;
    int j = 5;

    int* pi;
    int* pj;
    pi = &i;
    pj = &j;

    printf("i=%d,*pi=%d,*pj=%d\n",i,*pi,*pj);//i=10,*pi=10,*pj=5
    change(&pi,pj);
    printf("i=%d,*pi=%d,*pj=%d\n",i,*pi,*pj);//i=10,*pi=5,*pj=5
    return 0;
}

