#include <stdio.h>

int main()
{
    int year;
    while (scanf("%d",&year))
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d 是闰年!\n",year);
        }else{
            printf("%d 不是闰年!\n",year);
        }

        int i,j=6;
        i = !!j;
        printf("i = %d\n",i);
        return 0;
    }
    
}