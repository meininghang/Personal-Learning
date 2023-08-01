#ifndef PERSONAL_LEARNING_MAIN_H
#define PERSONAL_LEARNING_MAIN_H

#include <iostream>
using namespace std;

typedef char BiElemType;

typedef struct BiTNode
{
    BiElemType c;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

typedef struct tag
{
    BiTree p;
    struct tag *pnext;
}tag_t,*ptag_t;
#endif //PERSONAL_LEARNING_MAIN_H
