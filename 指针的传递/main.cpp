#include <cstdio>

void change(int *j)
{
    *j = 5;//指针的间接访问
}
int main()
{
    int i = 10;//i是局部变量
    printf("改变前i=%d\n",i);
    change(&i);
    printf("改变后i=%d\n",i);
    return 0;
}