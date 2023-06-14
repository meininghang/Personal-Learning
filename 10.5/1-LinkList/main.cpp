#include <iostream>
using namespace std;

#define MaxSize 50
typedef int ElemType;
//顺序表结构体
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;


bool ListInsert(SqList &L, int i, ElemType element)
{
    if (i < 1 || i > L.length + 1)
    {
        return false;
    }
    if (L.length == MaxSize)
    {
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = element;
    L.length++;
    return true;
}

bool ListDelete(SqList &L,int i, ElemType &e)
{
    if (i < 1 || i >L.length){
        return false;
    }
    e = L.data[i-1];
    int j;
    for (j = i-1; j < L.length-1 ; j++) {
        L.data[j] = L.data[j+1];
    }
    L.length--;
    return true;
}

int LocateElem(SqList L,ElemType element){
    for (int i = 0; i < L.length; ++i) {
        if (element==L.data[i])
        {
            return i+1;
        }
    }
    return 0;
}
void PrintList(SqList L){
    int i;
    for (i = 0; i < L.length; i++) {
        cout << L.data[i] << ' ';
    }
    cout << endl;
}
int main(){
    SqList L;
    bool ret;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;
    PrintList(L);
    ret = ListInsert(L,2,60);
    if (ret)
    {
        cout << "Insert success!" << endl;
        PrintList(L);
    }else
    {
        cout << "Insert failed" << endl;
    }
    ElemType del;
    ret = ListDelete(L,1,del);
    if (ret)
    {
        cout << "Delete Success!" << endl;
        cout <<"del element = " << del << endl;
        PrintList(L);
    }else
    {
        cout << "Delete Failed！" << endl;
    }
    int pos;
    pos = LocateElem(L,60);
    if (pos)
    {
        cout << "找到了" << endl;
        cout <<pos;
    }else{
        cout << "找不到" << endl;
    }
    return 0;
}

