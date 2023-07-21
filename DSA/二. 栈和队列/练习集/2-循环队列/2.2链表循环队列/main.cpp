#include <iostream>
using namespace std;

typedef struct LReQueue{
    int data;
    struct LReQueue *next;
}LReQueue;

void enLReQueue(LReQueue *front, LReQueue *&rear, int val);
bool deQueue(LReQueue *&front, LReQueue *&rear);

int main()
{   
    LReQueue *front, *rear;
    front = rear = (LReQueue*)malloc(sizeof(LReQueue));
    rear->next = front;

    enLReQueue(front,rear,3);
    enLReQueue(front,rear,4);
    enLReQueue(front,rear,5);
    enLReQueue(front,rear,6);
    enLReQueue(front,rear,7);

    deQueue(front,rear);
    deQueue(front,rear);
    deQueue(front,rear);
    deQueue(front,rear);
    deQueue(front,rear);

    deQueue(front,rear);

     return 0;
}

//仍然是尾插法,但是需要将最后的值的指针指向头部,以满足循环的要求,需要注意,重复不等于不能使用新空间
void enLReQueue(LReQueue *front, LReQueue * &rear, int val)
{
    if (rear->next==front)//队满则开新空间
    {
        LReQueue *pnew;
        pnew = (LReQueue*)malloc(sizeof(LReQueue));

        rear->data = val;
        rear->next = pnew;

        pnew->next = front;
        rear = pnew;
    }else{
        rear->data = val;
        rear = rear->next;
    }
}

bool deQueue(LReQueue *&front, LReQueue *&rear)
{
    if (front==rear)
    {
        cout << "队空无值" << endl;
        return false;
    }
    int deVal = front->data;
    cout << "此时删除的值为 " << deVal <<endl;
    front = front->next;    
}