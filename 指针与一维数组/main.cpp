#include <cstdio>

void change(char *d)
{
    *d  = 'H';
    puts(d);
}

int main()
{
    char c[10] = "hello";
    change(c);
    return 0;
}