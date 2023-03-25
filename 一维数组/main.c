#include <stdio.h>
//打印数组中的每一个元素,数组在传递时，元素个数无法传递
void print(int a[],int len)
{
    int i;
    for ( i = 0; i < len; ++i) {
        printf("a[%d]=%d\n",i,a[i]);
    }
    a[4] = 20;
}

int main()
{
    int j = 10;
    int a[5] = {1,2,3,4,5};
    int i = 3;
//    a[5] = 20;//访问越界，访问了不属于自己的空间
//    printf("%d\n",j);
    print(a,5);
    printf("a[4]=%d\n",a[4]);
    return 0;
}