#include <cstdio>
#include <cstdlib>
#include <cstring>
//函数自己调用自己就是递归

int f(int n)
{
    if (1==n)
    {
        return 1;//结束条件
    }
    
    return n * f(n-1);//递归公式
}

int main()
{
    int n = 5;
    int result = f(n);
    printf("%d\n",result);
    return 0;
}