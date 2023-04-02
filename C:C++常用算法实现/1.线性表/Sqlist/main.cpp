#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MaxSize 50
typedef int ElemType;//便于后续改动变量类型

typedef struct//定义结构体
{
    ElemType data[MaxSize];
    int length;//顺序表长度
}SqList;

bool ListInsert(SqList &L, int i, ElemType element)//顺序表的插入,因为L会改变,因此要用引用
{
    //判断i是否合法
    if (i<1 || i > L.length+1)
    {
        return false;
    }
    //如果存储空间满了,则不能插入
    if (L.length == MaxSize)
    {
        return false;
    }
    //把后面的元素依次向后移动,空出位置准备放入要插入的元素
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = element;//放入要插入的元素
    L.length++;//顺序表长度加一
    return true;//插入成功返回true
    
}
//打印顺序表
void PrintList(SqList L){
    for (int i = 0; i < L.length; i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
    
}
int main()
{
    SqList L;//用结构体定义一个顺序表
    bool ret;//查看返回值,用来承载函数的返回值
    ElemType del;//要删除的元素
    L.length=3;//元素长度和数量

    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    PrintList(L);//先打印一下没有插入值的顺序表
    printf("-----------\n");
    ret = ListInsert(L, 2, 60);//在第二个元素位置存入60

    if (ret)
    {
        printf("成功\n");
        PrintList(L);//打印插入成功后的新顺序表
    }else{
        printf("失败\n");
    }
    
    return 0;
}