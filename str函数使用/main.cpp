#include <cstdio>
#include <cstring>


int main()
{
    char c[20] = "wangdao";
//    sizeof(c);
    printf("数组c内字符串的长度=%d\n", strlen(c));
    char d[20];
    //复制
    strcpy(d,c);
    puts(d);
    //比较
    int ret = strcmp(d,"wangdaodao");
    printf("比较结果=%d\n",ret);//两个字符串比较，对比相应字符位置的ASCII值
    //组合
    strcat(d,c);
    puts(d);//目标数组要能容纳拼接后的字符串
    return 0;
}