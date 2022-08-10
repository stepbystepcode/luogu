#include <stdio.h>
int main(void)
{
  int n,s;
  scanf("%d",&n);
  for (int i = 0; i <= n; i++) s+=i;
  printf("%d\n",s);
  return 0;
}
