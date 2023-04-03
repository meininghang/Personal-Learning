#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int pic[10][10];
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; i <= m; j++)
        {
            printf("%d\n",pic[i][j]);
        }
        
    }
    return 0;
}