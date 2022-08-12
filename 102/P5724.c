#include <stdio.h>
int main(void)
{
  int n,x,max,min;
  scanf("%d %d",&n,&max);
  min=max;
  for (int i = 1; i < n; i++) {
    scanf("%d",&x);
    if (x>max) max=x;
    if (x<min) min=x;
  }
  printf("%d\n",max-min);
  return 0;
}
