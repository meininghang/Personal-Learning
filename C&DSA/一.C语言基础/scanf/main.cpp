#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);//标准输入
    printf("%d\n",i);

   fflush(stdin);//清空标准输入缓冲区

   char c;
   scanf("%c",&c);
   printf("%c\n",c);

    float f;
    scanf("%f",&f);
    printf("%.1f\n",f);

    int ret;// scanf 匹配成功的个数
    ret = scanf("%d %c%f",&i,&c,&f);
    printf("%d,%c,%.2f\n",i,c,f);
    return 0;
}