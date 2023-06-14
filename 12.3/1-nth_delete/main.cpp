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
bool ListFrontInsert(LinkList L,int InsertPos, ElemType InsertVal);
bool ListDelete(LinkList L,int i);

int main(){
    LinkList L;
    // ListHeadInsert(L);
    //LinkList search;
    ListTailInsert(L);
    PrintList(L);
    ListDelete(L,1);
    PrintList(L);
    return 0;
}
bool ListDelete(LinkList L,int i){
    LinkList p =GetElem(L,i-1);
    if (p==NULL)
    {
        return false;
    }    
    LinkList q = p->next;
    p->next = q->next;
    free(q);
    return true;
}
bool ListFrontInsert(LinkList L,int i, ElemType InsertVal){
    LinkList p = GetElem(L,i-1);
    if (NULL==p)
    {
        return false;
    }
    LinkList q = (LinkList)malloc(sizeof(LNode));
    q->data = InsertVal;
    q->next = p->next;
    p->next = q;
    return true;
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
void ListHeadInsert(LinkList &L){
    L = (LinkList) malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    cin >> x;
    LinkList s;
    while (x!=9999)
    {
        s = (LinkList) malloc(sizeof(LNode));
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
    cout << endl;
}