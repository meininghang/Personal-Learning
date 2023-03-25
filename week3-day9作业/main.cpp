#include <cstdio>
#include <cstring>

int main()
{
    char c[100],d[100];
    fgets(c,sizeof(c),stdin);
//    puts(c);
    int i, j;//游标
    for (i = strlen(c)-1,j=0; i>=0  ;i--, j++) {
        d[j] = c[i];
    }
    puts(d);
    return 0;
}