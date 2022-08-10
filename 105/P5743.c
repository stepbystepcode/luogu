#include <stdio.h>
int main(void)
{
  int n,num=1;
  scanf("%d",&n);
  for (int i = 0; i < n-1; i++) {
    num=(num+1)*2;
  }
  printf("%d\n",num);
  return 0;
}
