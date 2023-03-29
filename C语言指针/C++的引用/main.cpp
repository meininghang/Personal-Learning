#include <cstdio>
#include <cstdlib>
#include <cstring>

void modify_num(int &b)//引用,主函数内和子函数内效果一致
{
    b++;
}

void modify_pointer(int* &p)
{
    p = (int *)malloc(20);//堆空间
    p[0] = 5;
    printf("%d\n",p[0]);
    free(p);
}
int main()
{
    int a = 10;
    modify_num(a);
    printf("%d\n",a);
    int *p = NULL;
    modify_pointer(p);
    //printf("%d\n",p[0]);
    return 0;
}