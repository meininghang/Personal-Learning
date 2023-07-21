#include <iostream>
using namespace std;

#define maxSize 50
typedef struct
{
    int data[maxSize];
    int top;
}SqStack;


bool Enqueue(SqStack &S, int val);
void topQueue(SqStack S);
bool Dequeue(SqStack &S);

int main(){
    SqStack S;
    S.top = -1;//初始化
    Enqueue(S,3);
    Enqueue(S,4);
    Enqueue(S,5);
    Enqueue(S,6);
    topQueue(S);
    Dequeue(S);
    topQueue(S);
    return 0;
}

bool Enqueue(SqStack &S, int val)
{
    if (S.top == maxSize-1) return false;
    S.data[++S.top] = val;
    return true;
}
void topQueue(SqStack S)
{
    if (S.top==-1)
    {
        cout << "栈空无值" <<endl;
    }
    int topVal;
    topVal = S.data[S.top];
    cout << "栈顶值为 " << topVal << endl;
}
bool Dequeue(SqStack &S)
{
    if (S.top==-1) return false;
    int deVal;
    deVal = S.data[S.top--];
    cout << "删除的值为 " << deVal << endl;
    return true;
}