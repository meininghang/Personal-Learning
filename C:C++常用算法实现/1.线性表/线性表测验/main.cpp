#include <cstdio>
#include <cstdlib>
#include <cstring>

//练习顺序表的插入和删除

#define MaxSize 50
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;//定义顺序表结构体

//插入函数
void ListInsert(SqList &L, int pos, ElemType InsertVal)
{
    //判断插入位置合法与否
    if (pos < 1 || pos > L.length+1)
    {
        return;//void函数的返回没有值
    }
    if (L.length>=MaxSize)
    {
        return;
    }
    
    for (int j = L.length; j >= pos; j--)//把后面的元素依次往后移动
    {
        /* code */
        L.data[j] = L.data[j-1];
    }
    L.data[pos-1] = InsertVal;
    L.length++;//插入元素后长度+1
    
}

//删除操作
bool ListDelete(SqList &L, int i)
{
    if (i < 1 || i > L.length)
    {
        return false;
    }
    for (int j = i; j < L.length; j++)//往前移动元素
    {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
    
}

void PrintList(SqList L)//打印链表
{
    for (int i = 0; i < L.length; i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
       
}


int main()
{
    SqList L;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;//顺序表初始化
    L.length = 3;
    ElemType InsertVal;
    //读取要插入的元素
    scanf("%d",&InsertVal);
    ListInsert(L,2,InsertVal);//插入元素
    PrintList(L);
    printf("--------------\n");
    //读取要删除的位置
    int DeletePos;
    scanf("%d",&DeletePos);
    bool ret;
    ret=ListDelete(L,DeletePos);
    if (ret)
    {
        /* code */
        PrintList(L);//删除成功后打印顺序表
    }else{
        printf("false\n");
    }
    
    return 0;
}