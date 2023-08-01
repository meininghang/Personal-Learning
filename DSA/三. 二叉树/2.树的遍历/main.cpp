#include "main.h"

void preOrder(BiTree p);
void inOrder(BiTree p);
void postOrder(BiTree p);

int main()
{
    BiTree pnew;
    BiTree tree = NULL;
    BiElemType c;

    ptag_t phead=NULL, ptail = NULL, listpnew = NULL, pcur= NULL;

    while (cin>>c)
    {
        if (c=='z') break;
        pnew = (BiTree) calloc(1, sizeof(BiTNode));
        pnew->c = c;
        listpnew = (ptag_t) calloc(1,sizeof(tag_t));
        listpnew->p = pnew;
        if (NULL==tree)
        {
            tree=pnew;
            phead = listpnew;
            ptail = listpnew;
            pcur = listpnew;
        }else{
            ptail->pnext = listpnew;
            ptail = listpnew;

            if(pcur->p->lchild==NULL)
            {
                pcur->p->lchild = pnew;
            }else if(pcur->p->rchild==NULL){
                pcur->p->rchild=pnew;

                pcur=pcur->pnext;
            }
        }
    }
    cout << "-----------前序遍历————————————" << endl;
    preOrder(tree);
    cout << endl;
    cout << "-----------中序遍历————————————" << endl;
    inOrder(tree);
    cout << endl;
    cout << "-----------后序遍历————————————" << endl;
    postOrder(tree);
    return 0;
}

void preOrder(BiTree p)
{
    if (NULL!=p) {
        cout << p->c << " ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}
void inOrder(BiTree p)
{
    if (NULL!=p) {
        inOrder(p->lchild);
        cout << p->c << " ";
        inOrder(p->rchild);
    }
}
void postOrder(BiTree p)
{
    if (NULL!=p) {
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout << p->c << " ";
    }
}