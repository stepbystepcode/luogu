#include <stdio.h>
int main(void)
{
  int k,i;
  double s=0;
  scanf("%d",&k);
  for (i = 0; s < k ; ++i) s += 1.0/i;
  printf("%d\n",i);
  return 0;
}
