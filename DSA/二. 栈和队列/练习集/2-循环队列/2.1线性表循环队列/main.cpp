#include <iostream>
using namespace std;

#define maxSize 50

typedef struct{
    int data[maxSize];
    int front, rear;
}SqRecQueue;

bool pushSqRecQueue(SqRecQueue &SRQ,int val);
bool popSqRecQueue(SqRecQueue &SRQ);

int main(){
    SqRecQueue SRQ;
    SRQ.front = SRQ.rear = 0;

    pushSqRecQueue(SRQ,3);
    pushSqRecQueue(SRQ,4);
    pushSqRecQueue(SRQ,5);
    pushSqRecQueue(SRQ,6);
    pushSqRecQueue(SRQ,7);

    popSqRecQueue(SRQ);
    popSqRecQueue(SRQ);
    popSqRecQueue(SRQ);
    popSqRecQueue(SRQ);
    popSqRecQueue(SRQ);

    popSqRecQueue(SRQ);
    return 0;
}
bool pushSqRecQueue(SqRecQueue &SRQ, int val)
{
    if (SRQ.rear == maxSize-1) return false;
    SRQ.data[SRQ.rear] = val;
    SRQ.rear = (SRQ.rear+1)%maxSize;
    return true;
}
bool popSqRecQueue(SqRecQueue &SRQ)
{
    if (SRQ.rear == SRQ.front) 
    {   
        cout << "队空无值" <<endl;
        return false;
    }
    int popVal;
    popVal = SRQ.data[SRQ.front];
    cout << "此时删除的值为 " << popVal << endl;
    SRQ.front = (SRQ.front+1)%maxSize;
    return true;
}