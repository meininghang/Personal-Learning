#include <cstdio>
#include <cstdlib>
#include <cstring>

void my_swap(int *a, int *b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

int main() {
  int a = 6, b = 10;
  printf("a=%d,b=%d\n",a,b);
  printf("----------\n");
  my_swap(&a, &b);
  printf("a=%d,b=%d\n",a,b);
  // 调用后，main 函数中 a 变量的值变为 10，b 变量的值变为 6
  return 0;
}

