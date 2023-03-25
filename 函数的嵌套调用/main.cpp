#include "func.h"
#include "func.cpp"

int main()
{
    int a = 10;
    a = printstar(a);//函数调用
    print_message();
    printstar(a);//再次调用函数
    return 0;
}