#include <cstdio>

int main()
{
    int a[3] = {2,7,8};
    int *p;
    p = a;//让指针变量p，指向数组的开头
    int j;
    j = *p++;//j=*p,p++,任何时候都是把后++去掉，第二步要看优先级来选择操作对象
//    j = (*p)++;//j=(*p),(*p)++
    printf("a[0]=%d\nj=%d\n*p=%d\n",a[0],j,*p);
    j = p[0]++;//j=p[0],p[0]++
    printf("a[0]=%d\nj=%d\n*p=%d\n",a[0],j,*p);
    return 0;
}