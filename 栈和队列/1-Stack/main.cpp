#include <iostream>
using namespace std;

#define  MaxSize 50
typedef int ElemType; 
typedef struct{
    ElemType data[MaxSize];
    int top;
}SqStack;

void initialStack(SqStack &S);
bool stackEmpty(SqStack S);
bool pushStack(SqStack &S,ElemType &element);
bool getStackTop(SqStack S,ElemType &topVal);
bool popStack(SqStack &S,ElemType &element);
int main()
{   
    SqStack S;
    initialStack(S);
    bool flag = stackEmpty(S);
    if (flag) {cout << "栈为空" << endl; }
    ElemType element,topVal;
    cin >> element;
    while (element!=9999)
    {
        pushStack(S,element);
        bool flag2 = getStackTop(S,topVal);
        if (flag2) {cout << topVal << endl; }
        cin >> element;
    }


    bool flag3 = popStack(S,element);
    if (flag3) {cout << element << endl; }
    return 0;
}

void initialStack(SqStack &S)
{
    S.top = -1;
}
bool stackEmpty(SqStack S)
{
    if (-1==S.top) return true;
    return false;
    
}
bool pushStack(SqStack &S,ElemType &element)
{
    if (S.top == MaxSize-1) return false;
    S.data[++S.top] = element;
    return true;
    
}
bool getStackTop(SqStack S,ElemType &topVal)
{
    if(-1==S.top) return false;
    topVal = S.data[S.top];
    //cout << topVal << endl;
    return true;
}
bool popStack(SqStack &S,ElemType &element)
{
    if (stackEmpty(S)) return false;
    element = S.data[S.top--];
    return true;
}