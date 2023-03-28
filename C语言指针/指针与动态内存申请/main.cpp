#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int i;//申请空间大小
    scanf("%d",&i);
    char* p;
    p = (char *)malloc(i);//注意访问越界问题
    char c;
    scanf("%c",&c);//为了去除\n,否则无法写入数据!
    fgets(p,sizeof(p),stdin);
    // strcpy(p,"malloc success");
    puts(p);
    free(p);//释放空间
    p = NULL;
    return 0;
}