#include <iostream>
using namespace std;

#define MaxSize 5
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int front, rear;
}SqQueen;


void initQueen(SqQueen &Q);
bool isEmpty(SqQueen Q);
int main()
{
    SqQueen Q;
    initQueen(Q);

    return 0;
}

void initQueen(SqQueen &Q)
{
    Q.front = Q.rear = 0;
}
bool isEmpty(SqQueen Q)
{
    Q.rear == Q.front;
}