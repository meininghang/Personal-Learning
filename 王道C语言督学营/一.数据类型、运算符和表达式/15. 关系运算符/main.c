#include <stdio.h>

int main()
{
    // printf("%d\n", 5<3);
    //判断浮点数是否相等
    float f = 234.56;
    if (f - 234.56 > -1e4 && f - 234.56 < 0.0001)
    {
        printf("OK\n");
    }
    else{
        printf("Not OK\n");
    }
    
}