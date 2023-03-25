#include <cstdlib>
#include <cstdio>

struct student {
    int num;
    char name[20];
    char sex;
};

int main()
{
    struct student s = {1001,"lele",'M'};
    struct student *p;
    p = &s;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);
    printf("%d %s %c\n",p->num,p->name,p->sex);//等价于上式,指针的成员选择
    //结构体初始化
    struct student sarr[3] = {1001,"lele", 'M', 1005,"leilei",'F',1003,"lili",'M'};
    p = sarr;
    printf("----------------\n");
    int num = p->num++;
    printf("num=%d,p->num=%d\n",num, p->num);
    num = p++->num;
    printf("num=%d,p->num=%d\n",num, p->num);
    return 0;
}