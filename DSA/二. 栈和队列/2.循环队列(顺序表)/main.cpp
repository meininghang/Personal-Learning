#include <iostream>
using namespace std;

#define MaxSize 50
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int front, rear;//核心是轮盘，依次转动
}SqQueen;

void initQueen(SqQueen &Q);
bool EnQueue(SqQueen &Q, ElemType &x);
bool DeQueue(SqQueen &Q,ElemType &x);

int main(){
    SqQueen Q;
    initQueen(Q);
    ElemType x;
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);
    cin >> x;
    EnQueue(Q,x);


    DeQueue(Q,x);
    DeQueue(Q,x);

    cout << "此时队头元素为" << Q.data[Q.front] << endl;
    cout << "此时队尾元素为" << Q.data[Q.rear-1] << endl;
     
    return 0;
}

void initQueen(SqQueen &Q)
{
    Q.rear = Q.front = 0;//设置为零，且起始相等
}
bool EnQueue(SqQueen &Q, ElemType &x)
{
    if ((Q.rear+1)%MaxSize==Q.front) return false;//重复使用，需要取模
    Q.data[Q.rear] = x;//给队列填新值，队尾添值
    Q.rear = (Q.rear+1)%MaxSize;//队尾计数加1，取模去重
    return true;
}//0 O 1 l L Q q
bool DeQueue(SqQueen &Q,ElemType &x)
{
    if (Q.rear == Q.front) return false;//队空无值
    x = Q.data[Q.front];//取出队头值返回给变量
    cout << "此时出列元素为 "<< x << endl;
    Q.front = (Q.front+1)%MaxSize;//队头计数加1，取模去重
    return true;
}