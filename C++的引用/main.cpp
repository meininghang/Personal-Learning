#include <cstdio>
#include <cstdlib>

void modifynum(int &b)
{
    b++;

}

void modify_pointer(int *&p)//在子函数内操作p和在主函数内一致
{
    p = (int *)malloc(20);//int *p
    p[0] = 5;
}
int main()
{
    int a = 10;
    modifynum(a);
    printf("%d\n",a);
    printf("------------\n");
    int *p = NULL;//NULL==0
    modify_pointer(p);
    printf("%d\n",p[0]);
    return 0;
}