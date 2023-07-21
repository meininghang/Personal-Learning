#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode,*LinkList;

void CircleQueue(LinkList &front,LinkList &rear);
void EnQueue(LinkList front,LinkList &rear,ElemType x);
void DeQueue(LinkList &front, LinkList rear);
int main(){
    LinkList front,rear;
    CircleQueue(front,rear);
    return 0;
}


void CircleQueue(LinkList &front,LinkList &rear)
{
front = (LinkList) malloc(sizeof(LNode));
front = rear;
rear->next = front;

    EnQueue(front,rear,3);
    EnQueue(front,rear,4);
    EnQueue(front,rear,5);
    EnQueue(front,rear,6);
    EnQueue(front,rear,7);
    EnQueue(front,rear,8);


    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
    DeQueue(front,rear);
}

void EnQueue(LinkList front,LinkList &rear,ElemType x)
{
    LinkList pnew;
    if (rear->next == front)
    {
        pnew = (LNode*) malloc(sizeof(LNode));
        rear->data = x;
        rear->next = pnew;

        pnew->next = front;
        rear = pnew;
    }else{
        rear->data = x;
        rear = rear->next;
    }
}

void DeQueue(LinkList &front, LinkList rear)
{
    if (front==rear) {
        cout << "没值了" << endl;
        return;
    }else{
        cout << "出队值为" << front->data <<  endl;
        front = front->next;
    }
}