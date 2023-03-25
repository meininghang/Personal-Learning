#include <cstdio>
#include <cstdlib>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};//结构体跟函数不同，最后要有分号结尾


int main()
{
    struct student s = {1001,"lele",'M',20,98.5,"shenzhen"};
    struct student sarr[3];//结构体数组
    int i;
    printf("%d %s %c %d %.2f %s \n",s.num,s.name,s.sex,s.age,s.score,s.addr);
    for (i = 0; i < 3; i++) {
        scanf("%d%s %c%d%f%s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,sarr[i].addr);
    }
    return 0;
}