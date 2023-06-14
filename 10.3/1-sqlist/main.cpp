#include <iostream>
using namespace std;

#define MaxSize 50
typedef int ElemType;
//顺序表结构体
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;


bool ListInsert(SqList &L,int i, ElemType element)
{
    if (i < 1 || i > L.length + 1)
    {
        return false;
    }
    if (L.length == MaxSize)
    {
        return false;
    }
    for (int j = L.length; j > i; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = element;
    L.length++;
    return true;
}
void PrintList(SqList L){
    int i;
    for (i = 0; i < L.length; i++) {
        cout << L.data[i] << ' ';
    }
}
int main(){
    SqList L;
    bool ret;
    L.data[0] = 1;
    L.data[1]=2;
    L.data[2]=3;
    L.length = 3;
    ret = ListInsert(L,2,60);
    if (ret)
    {
        cout << "Insert success" << endl;
        PrintList(L);
    }else
    {
        cout << "Insert failed" << endl;
    }

    return 0;
}
