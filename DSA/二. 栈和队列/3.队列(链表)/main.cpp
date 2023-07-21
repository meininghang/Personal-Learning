#include "main.h"
#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode* next;
}LinkNode;//规定队列格式

typedef struct{
    LinkNode *front, *rear;
}LinkQueue;//规定队列头尾

void Enqueue(LinkQueue &Q, ElemType x);//尾插法加新值
bool DeQueue(LinkQueue &Q, ElemType &x);//头删法去旧值

int main(){
    LinkQueue Q;
    Q.rear = Q.front = (LinkNode*) malloc(sizeof(LinkNode));
    Q.front->next = NULL;

    Enqueue(Q,3);
    Enqueue(Q,4);
    Enqueue(Q,5);
    Enqueue(Q,6);
    Enqueue(Q,7);

    ElemType x;
    DeQueue(Q,x);
    DeQueue(Q,x);
    return 0;
}
void Enqueue(LinkQueue &Q, ElemType x)
{
    //新申请空间存放新值
    LinkNode *pnew = (LinkNode*) malloc(sizeof(LinkNode));
    pnew->data = x;
    pnew->next = NULL;

    Q.rear->next = pnew;
    Q.rear = pnew;//队尾指针始终指向新的队尾
    return;
}
bool DeQueue(LinkQueue &Q, ElemType &x)
{
    if (Q.rear==Q.front) return false;//队空无值
    LinkNode *q = Q.front->next;//此时无需申请空间，头结点之后必有值
    x = q->data;//保存待删除节点值

    Q.front->next = q->next;//重新设置新头结点
    if (Q.rear==q) Q.rear = Q.front;//如果删除到末尾，则头尾相连，此时队空
    free(q);//必须释放空间！！！
    cout << "此时删除的值为 " << x << endl;
    return true;

}