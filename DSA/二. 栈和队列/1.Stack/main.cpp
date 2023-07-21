#include <iostream>
using namespace std;

#define MaxSize 50
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top;
}SqStack;

void initStack(SqStack &S);
bool stackEmpty(SqStack S);
bool pushStack(SqStack &S, ElemType x);
bool topStack(SqStack S);
bool popStack(SqStack &S);

int main(){
    SqStack S;
    initStack(S);
    bool flag;
    flag = stackEmpty(S);
    if (flag)
    {
        cout << "Stack is Empty!" << endl;
    }
    pushStack(S,3);
    topStack(S);
    pushStack(S,4);
    topStack(S);
    pushStack(S,5);
    topStack(S);
    popStack(S);
    topStack(S);
    return 0;
}


void initStack(SqStack &S)
{
    S.top = -1;
}
bool stackEmpty(SqStack S)
{
    if(S.top == -1) return true;
    return false;
}
bool pushStack(SqStack &S, ElemType x)
{
    if (S.top == MaxSize-1)//此时栈满，无法入栈
    {
        return false;
    }
    S.data[++S.top] = x;//是给栈填新值
    return true;
    
}
bool topStack(SqStack S)
{   
    ElemType topValue;
    if (stackEmpty(S))//空栈无值
    {
        return false;
    }
    topValue = S.data[S.top];//栈顶值必须是一个值
    cout << "Top Value is " << topValue << endl;
    return true;
}
bool popStack(SqStack &S)
{
    ElemType popValue;
    if (stackEmpty(S))//空栈无值
    {
        return false;
    }
    //接下来，栈会先去除原栈顶值，再将原栈顶值传递给变量
    popValue = S.data[S.top--];
    cout << "Pop Value is " << popValue << endl;
    return true;
}