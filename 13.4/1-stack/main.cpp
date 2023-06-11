#include <iostream>
using namespace std;
#define MaxSize 50
typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int top;//栈顶变量
}SqStack;

void InitStack(SqStack &S){
    S.top = -1;//初始化栈,此时为空
}
//判断栈是否为空
bool StackEmpty(SqStack S){
    if (-1 == S.top)//此时栈为空
    {
        return true;
    }else{
        return false;
    }
    
}
//入栈
bool Push(SqStack &S, ElemType x){
    if (S.top == MaxSize-1)//此时栈已经放满,无法加入新元素
    {
        return false;
    }else{
        S.data[++S.top] = x;//将新元素放入栈顶
        return true;
    }
    
}
//获取栈顶值
bool GetTop(SqStack S,ElemType &m){
    if (StackEmpty(S))
    {
        return false;
    }
    m = S.data[S.top];
    return true;
}
//出栈
bool Pop(SqStack &S,ElemType &m){
    if (StackEmpty(S))//空栈不存在出栈
    {
        return false;
    }
    m = S.data[S.top--];
    return true;
}
int main(){
    SqStack S;
    InitStack(S);
    bool flag;
    flag = StackEmpty(S);
    if (flag)
    {
        cout << "Stack is empty" << endl;//空栈方便加入元素
    }
    Push(S,3);
    Push(S,4);
    Push(S,5);
    ElemType m;
    flag = GetTop(S,m);
    if (flag)
    {
        cout << "Get the top " << m << endl;
    }
    flag = Pop(S,m);
    if (flag)
    {
        cout << "Pop element " << m << endl;
    }
    
    return 0;
}