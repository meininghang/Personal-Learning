#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MaxSize 50
typedef int ElemType;//便于后续改动变量类型

typedef struct//定义结构体
{
    ElemType data[MaxSize];//此时data[]就是int数组,用以存放元素
    int length;//顺序表长度
}SqList;

bool ListInsert(SqList &L, int i, ElemType element)
//顺序表的插入,因为L会改变,因此要用引用,
//而element不涉及修改主函数中的值,因此不需要使用引用
{
    //判断i是否合法,反向操作,因为合法条件不容易采取限制措施
    if (i<1 || i > L.length+1)
    {
        return false;
    }
    //如果存储空间满了,则不能插入
    if (L.length == MaxSize)
    {
        return false;
    }//以上两步是限定条件,而不是函数真正发挥作用的部分
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

//删除顺序表中的元素,i代表要删除的元素的位置，&e是为了获取备删除的元素的值
bool ListDelete(SqList &L, int i, ElemType &e)
{
    //删除的元素位置i是否合法
    if (i < 1 || i > L.length)
    {
        return false;//一旦走到return，函数就会全部结束
    }
    e = L.data[i-1];//保存要删除元素的值，i从1开始，而不是0，务必注意这一点
    for (int j = i-1; j < L.length-1; ++j) {
        L.data[j] = L.data[j+1];//从后往前移动
    }
    L.length--;//长度减一
    return true;
}

//查找元素的值，成功返回对应位置，没找到就返回0
int LocateElem(SqList L, ElemType element)
{
    for (int i = 0; i < L.length; ++i) {
        if (element ==L.data[i])
        {
            return i+1;//i是数组的下标，+1才是顺序表的下标
        }
    }
    return 0;//循环结束没找到就返回0
}

int main()
{
    SqList L;//用结构体定义一个顺序表
    bool ret;//查看返回值,用来承载函数的返回值

    L.length=3;//元素长度和数量

    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    
    ret = ListInsert(L, 2, 60);

    if (ret)
    {
        printf("成功\n");
        PrintList(L);//打印顺序表
    }else{
        printf("失败\n");
    }
    printf("------------------");
    ElemType del;//要删除的元素存入del中
    ListDelete(L,1,del);//删除第一个元素
    if (ret)
    {
        printf("删除成功\n");
        printf("del value=%d\n",del);
        PrintList(L);//打印顺序表
    }else{
        printf("删除失败\n");
    }
    printf("------------------");
    int pos;//存储查询到的元素位置
    pos = LocateElem(L,60);
    if (pos){
        printf("查找成功\n");
        printf("pos=%d\n",pos);
    }else{
        printf("查找失败\n");
    }
    return 0;
}