#include <cstdio>
#include <cstdlib>
#include <cstring>


char* print_stack()
{
    char c[] = "I am print_stack";
    puts(c);
    return c;
}

char* print_malloc()
{
    char* p =(char *)malloc(30); 
    strcpy(p, "I am print_malloc");
    puts(p);
    return p;
}
int main()
{
    char* p;
    p = print_stack();
    puts(p);//函数无法在结束后继续调用,这是栈空间的自动释放机制

    p = print_malloc();
    puts(p);//不手动释放之前,堆空间不会随子函数的结束而自动释放
    free(p);
    p = NULL;
    return 0;
}