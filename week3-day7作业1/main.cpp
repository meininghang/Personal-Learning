#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 1;
    int total = 1;
    while (i<=n){
        total *= i;
        i++;
    }
    printf("%d\n",total);
    return 0;
}