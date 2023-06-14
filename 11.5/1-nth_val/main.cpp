#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode, *LinkList;

// void ListHeadInsert(LinkList &L);
void ListTailInsert(LinkList &L);
void PrintList(LinkList L);
LinkList GetElem(LinkList L, int searchPos);
LinkList LocateElem(LinkList L, ElemType searchVal);

int main(){
    LinkList L;
    // ListHeadInsert(L);
    LinkList search;
    ListTailInsert(L);
    PrintList(L);
    search = GetElem(L,6);
    if (search)
    {
        cout << "Success Search" << endl;
        cout << search->data << endl;
    }
    search = LocateElem(L,100);
    if (search)
    {
        cout << "Success Search" << endl;
        cout << search->data << endl;
    }
    return 0;
}
LinkList LocateElem(LinkList L, ElemType searchVal){
    while (L)
    {
        if (L->data == searchVal)
        {
            return L;
        }
        L = L->next;
    }
    return NULL;
}
LinkList GetElem(LinkList L, int searchPos){
    int i = 0;
    if (searchPos<0)
    {
        return NULL;
    }
    while (i < searchPos && L)
    {
        L = L->next;
        i++;
    }
    return L;
}
void ListTailInsert(LinkList &L){
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    ElemType x;
    cin >> x;
    LinkList s, r = L;
    while (x!=9999)
    {
        s = (LinkList) malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r=s;
        cin >> x; 
    }
    r->next = NULL;
    
}
// void ListHeadInsert(LinkList &L){
//     L = (LinkList) malloc(sizeof(LNode));
//     L->next=NULL;
//     ElemType x;
//     cin >> x;
//     LinkList s;
//     while (x!=9999)
//     {
//         s = (LinkList) malloc(sizeof(LNode));
//         s->data = x;
//         s->next = L->next;
//         L->next = s;
//         cin >> x;
//     }
// }
void PrintList(LinkList L){
    L = L->next;
    while (L)
    {
        cout << L->data << ' ';
        L = L->next;
    }
    cout << endl;
}