#include <cstdio>

int step(int n)
{
    if (1 == n || 2 == n)//结束条件
    {
        return n;
    }
    return step(n-1) + step(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n", step(n));
    return 0;
}