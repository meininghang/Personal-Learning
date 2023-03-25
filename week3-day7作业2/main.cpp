#include <cstdio>

int main()
{
    int a, b, c, d;//10元、5元、2元和1元分别有多少张
    int e = 0;//e代表组合情况
    for (a = 1; a < 41; a++) {
        for (b = 1; b < 41; b++) {
            for (c = 1; c < 41; c++) {
                for (d = 1; d < 41; d++) {
                    if(10 * a + 5 * b + 2 * c + 1 * d==100&&a+b+c+d==40)
                    {
                        e++;
                    }
                }
            }
        }
    }printf("%d\n",e);
    return 0;
}