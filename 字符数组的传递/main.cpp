#include <cstdio>

void print(char d[])
{
    int i = 0;
    while (d[i]!='\0')
    {
        printf("%c",d[i]);
        i++;
    }
    printf("\n");
    d[0] = d[0] - 32;
}

int main()
{
    char c[10] = "hello";
    print(c);
    printf("%s\n",c);
    return 0;
}

