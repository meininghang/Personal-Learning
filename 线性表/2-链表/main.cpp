#include <iostream>
using namespace std;

/*带头结点的单链表代码实战
- 初始化
- 插入：头插、尾插
- 打印
- 按值查询、按位置查询
- n_th 插入
- 删除*/
// 1 l L 0 o O 5 s S
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode* next;
}LNode, *LinkList;

void insertHeadVal(LinkList &L);
void insertTailVal(LinkList &L);
void searchVal(LinkList L, ElemType &searchValNum);
void searchOrder(LinkList L, int &orderNum);
void insertNth(LinkList &L,int orderNum,ElemType &insertVal);
void deleteOrderNum(LinkList L,int &orderNum);
void printList(LinkList L);

int main(){
    LinkList L;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    //insertHeadVal(L);
    insertTailVal(L);
    printList(L);
//    ElemType searchValNum;
//    cin >> searchValNum;
//    searchVal(L,searchValNum);
    int orderNum;
    cin >> orderNum;
    searchOrder(L,orderNum);
    int insertVal;
    cin >> insertVal;
    insertNth(L,orderNum,insertVal);
    printList(L);
    deleteOrderNum(L,orderNum);
    printList(L);
    return 0;
}
void insertHeadVal(LinkList &L)
{
    int x;
    cin >> x;
    while (x!=9999)
    {
        LinkList s;
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;

        s->next = L->next;
        L->next = s;
        cin >> x;
    }
}
void insertTailVal(LinkList &L)
{
    LinkList r = (LinkList) malloc(sizeof(LNode));
    r = L;
    int x;
    cin >> x;
    while (x!=9999)
    {
        LinkList s = (LinkList) malloc(sizeof(LNode));
        s->data = x;
        s->next = NULL;

        r->next = s;
        r = s;
        cin >> x;
    }
}
void searchVal(LinkList L, ElemType &searchValNum)
{
    L = L->next;
    int i = 0;
    while (L)
    {
        if (searchValNum == L->data)
        {
            cout << i + 1 << endl;
        }
        i++;
        L = L->next;
    }
    cout << "查无此数" << endl;
}
void searchOrder(LinkList L, int &orderNum)
{
    int i = 1;
    L = L->next;
    while (i<orderNum&&L)
    {
        L = L->next;
        i++;
    }
    cout << L->data << endl;
}
void insertNth(LinkList &L,int orderNum,ElemType &insertVal)
{
    LinkList q = (LinkList) malloc(sizeof(LNode));
    LinkList s = (LinkList) malloc(sizeof(LNode));
    s->data = insertVal;
    int i = 1;
    q=L;
    while (i<orderNum&&L)
    {
        q = q->next;
        i++;
    }
    s->next = q->next;
    q->next = s;
    return;
}
void deleteOrderNum(LinkList L,int &orderNum)
{
    LinkList q = (LinkList) malloc(sizeof(LNode));
    LinkList s = (LinkList) malloc(sizeof(LNode));
    int i = 1;
    q = L;
    while (i<orderNum&&L)
    {
        q = q->next;
        i++;
    }
    s = q->next;
    q->next = s->next;
    free(s);
    return;
}
void printList(LinkList L)
{
    L = L->next;
    while (L)
    {
        cout << L->data << ' ';
        L = L->next;
    }
    cout << endl;
}