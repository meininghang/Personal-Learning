#include <iostream>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

typedef struct{
    LNode *front, *rear;
}LQueue;

void EnQueue(LQueue &Q, int val);
bool DeQueue(LQueue &Q);

int main()
{   
    LQueue Q;
    Q.front = Q.rear = (LNode*)malloc(sizeof(LNode));//链表实现的Queue可以无限增加,因此不需要考虑队满,只需要注意队空条件
    Q.front->next = NULL;

    EnQueue(Q,3);
    EnQueue(Q,4);
    EnQueue(Q,5);
    EnQueue(Q,6);
    EnQueue(Q,7);

    DeQueue(Q);
    DeQueue(Q);
    DeQueue(Q);
    DeQueue(Q);
    DeQueue(Q);

    DeQueue(Q);

    return 0;
}

void EnQueue(LQueue &Q, int val)//本质就是尾插法
{
    LNode *pnew = (LNode*)malloc(sizeof(LNode));
    pnew->data = val;
    pnew->next = NULL;

    Q.rear->next = pnew;
    Q.rear = pnew;
}

bool DeQueue(LQueue &Q)//本质就是头删法
{
    if (Q.rear==Q.front)
    {
        cout << "队空无值" << endl;
        return false;
    }
    
    LNode *q = Q.front->next;
    int deVal;
    deVal = q->data;
    cout << "此时删除的值为 " << deVal << endl;
    Q.front->next = q->next;
    if (Q.rear == q)
    {
        Q.rear=Q.front;
    }
    free(q);
    return true;
}