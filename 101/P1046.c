#include <stdio.h>
int main(void)
{
  int a[10],max,reach;
  for (int i = 0; i < 10; i++) scanf("%d",&a[i]);
  scanf("%d",&max);
  for (int i = 0; i < 10; i++)
    if (a[i]<=max+30) reach++;
  printf("%d\n",reach);
  return 0;
}
