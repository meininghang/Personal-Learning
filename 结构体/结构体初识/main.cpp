#include <cstdio>
#include <cstdlib>
#include <cstring>

struct student
{   
    int num;   
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};


int main()
{
    struct student s = {1001,"lele",'M',23,34.4,"shenzhen"};
    struct student sarr[3];//结构体数组
    printf("%d %s %c %d %5.2f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %c %d %f %s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,sarr[i].addr);
    }
    for (int i = 0; i < 3; i++)//目前sarr[]中存储了3组结构体,需要主义将其输出
    {
        printf("%d %s %c %d %5.2f %s\n",sarr->num,sarr->name,sarr->sex,sarr->age,sarr->score,sarr->addr);

    }
            
    
    return 0;
}