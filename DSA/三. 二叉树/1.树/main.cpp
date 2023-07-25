#include "main.h"

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
    return 0;
}