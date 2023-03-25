#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);//接下来要输入的元素的数量
    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);//往数组里存放数据
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]==2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}