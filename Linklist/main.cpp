#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MaxSize 50
typedef int ElemType;//顺序表中元素的类型
//静态分配
typedef struct 
{
    ElemType data[MaxSize];//定义的数组,用来存放元素
    int length;//当前顺序表中元素个数
}SqList;
//i代表要插入的位置，从1开始，e代表要插入的元素
bool ListInsert(SqList  &L, int i, ElemType e)
{
    if(i<1 || i>L.length+1)//判断要插入的位置是否合法
        return false;
    if (L.length>=MaxSize)//超出空间
        return false;
    for (int j = L.length; j >= i; --j)//移动顺序表中的元素
        L.data[j] = L.data[j-1];//依次往后移
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, ElemType& e)
{
    if(i<1 || i>L.length+1)//判断要删除的位置是否合法
        return false;
    if(L.length == 0)
    {
        return false;
    }
    e = L.data[i-1];//获取顺序表中对应的元素，赋值给e
    for (int j = i; j < L.length; ++j) //从后往前移动
        L.data[j-1] = L.data[j];//小的等于大的
    L.length--;//删除元素长度减一
    return true;
}
//查找成功，返回位置，位置从1开始，查找失败，返回0
int LocateElem(SqList L, ElemType e)
{
    int i;
    for (int i = 0; i < L.length; ++i) //便利顺序表
        if (L.data[i] == e)//包含真假bool判断
            return i+1;//加1才是元素在顺序表中的位置
    return 0;
}
//打印顺序表元素
void PrintList(SqList &L)
{
    for (int i = 0; i < L.length; ++i) {
        printf("%4d",L.data[i]);
    }
    printf("\n");
}
int main()
{
    SqList L;//顺序表的名称
    bool ret;//查看返回值,true或false
    ElemType del;//存储要删除的元素
    //首先手动在顺序表中赋值
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;//链表长度
    ret = ListInsert(L, 2, 60);
    if (ret)
    {
        printf("插入成功\n");
        PrintList(L);
    }else{
        printf("插入失败\n");
        PrintList(L);
    }
    ret = ListDelete(L,2,del);//删除第一个位置的元素，并输出该元素值
    if (ret)
    {
        printf("删除成功\n");
        printf("删除的元素值为%d\n",del);
        PrintList(L);
    }else{
        printf("删除失败\n");
        PrintList(L);
    }

    int elem_pos;
    elem_pos = LocateElem(L,3);
    if (elem_pos)
    {
        printf("查找成功\n");
        printf("元素位置为%d\n",ret);//ret是返回位置
    } else{
        printf("查找失败\n");
    }
    return 0;
}