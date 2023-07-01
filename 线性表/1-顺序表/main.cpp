#include <iostream>
using namespace std;

#define MaxSize 50

typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int length;
}SqList;

void initList(SqList &L)
{
    ElemType x;
    for (int i = 0; i < L.length; i++)
    {
        cin >> x;
        L.data[i] = x;
    }
}

void printList(SqList L)
{
    for (int i = 0; i < L.length; i++)
        {
        cout << L.data[i] << " ";
        }
        cout << endl;
}

bool listInsert(SqList &L,int pos,ElemType insertNum)
{
    if (pos < 1 || pos > L.length+1) return false;
    if (L.length == MaxSize) return false;
    for (int i = L.length; i >= pos; i--)
    {
        L.data[i] = L.data[i-1];
    }
    L.data[pos-1] = insertNum;
    L.length++;
    cout << "The length of L is " << L.length << endl;
    return true;
}
bool listDelete(SqList &L,int pos)
{
    ElemType delNum;
    if (pos < 1 || pos > L.length) return false;
    if (L.length == 0) return false;
    delNum = L.data[pos-1];
    for (int i = pos; i <= L.length-1; i++)
    {
        L.data[i-1] = L.data[i];
    }
    L.length--;
    cout << "The delNum is " << delNum << endl;
    cout << "The length of L is " << L.length << endl;
    return true;
}
bool listSearchVal(SqList L,ElemType searchVal)
{
    for (int i = 0; i <= L.length; i++)
    {
        if (searchVal == L.data[i])
        {
            cout << i+1 << endl;
            return true;
        }
        
    }
        cout << "Search Failed" << endl;
        return false;
    
    
}
int main(){
    SqList L;
    L.length = 4;
    initList(L);
    printList(L);
    cout << "___________________ " << endl;
    bool ret = listInsert(L,1,60);
    if (ret)
    {
        printList(L);
    }else
    {
        cout << "Insert Failed" << endl;
    }
    cout << "___________________ " << endl;
    bool ret2 = listDelete(L,2);
    if (ret2)
    {
        printList(L);
    }else
    {
        cout << "Insert Failed" << endl;
    }
    cout << "___________________ " << endl;
    listSearchVal(L,4);
    return 0;
}