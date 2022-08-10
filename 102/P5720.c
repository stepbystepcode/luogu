#include <stdio.h>
int main(void)
{
  int a,i=1;
  scanf("%d",&a);
  while (a!=1) {
    a/=2;
    i++;
  }
  printf("%d\n",i);
  return 0;
}
