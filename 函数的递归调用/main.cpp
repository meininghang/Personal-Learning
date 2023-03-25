//函数自己调用自己

#include <cstdio>

int f(int n)
{
    if(1==n)
    {
        return 1;//第二步结束条件
    }
    return n * f(n-1);//第一步写好公式，
}

int main()
{
    printf("%d\n",f(3));
    return 0;
}
