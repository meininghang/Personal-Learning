#include <cstdio>
#include <cstdlib>
#include <cstring>

char *print_stack()
{
    char c[17] = "I am print_stack";
    puts(c);
    return c;
}

char *print_malloc()
{
    char *p = (char *)malloc(20);
    strcpy(p,"i am a malloc");
    puts(p);
    return p;
}

int main()
{
    char *p;
    p = print_stack();//栈空间会随着函数的执行结束而释放
//    puts(p);//打印不出来，此时函数已经执行过，无法再次调用
    p = print_malloc();//堆空间不会随子函数的结束而释放，必须手动释放
//    free(p);//此时无法输出，因为已经手动释放堆空间
    puts(p);

    return 0;
}