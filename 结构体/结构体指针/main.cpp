#include <cstdio>
#include <cstdlib>
#include <cstring>

struct student {
    int num;
    char name[20];
    char sex;
};

int main()
{
    student s = {1001, "lele", 'M'};
    student *p;
    p = &s;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}