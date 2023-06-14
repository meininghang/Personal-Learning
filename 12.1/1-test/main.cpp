#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode, *LinkList;

void ListHeadInsert(LinkList &L);
void ListTailInsert(LinkList &L);
void PrintList(LinkList L);

int main(){
    LinkList L;
    // ListHeadInsert(L);
    // PrintList(L);
    ListTailInsert(L);
    PrintList(L);
    return 0;
}
void ListTailInsert(LinkList &L){
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElemType x;
    LinkList s,r=L;
    cin >> x;
    while (x!=9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r=s;
        cin >> x;
    }
    r->next = NULL;
}
void ListHeadInsert(LinkList &L){
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElemType x;
    LinkList s;
    cin >> x;
    while (x!=9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    
}
void PrintList(LinkList L){
    L = L->next;
    while (L)
    {
        cout << L->data << ' ';
        L = L->next;
    }
    cout <<  endl;
}