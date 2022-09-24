#include <stdio.h>
int main(void)
{
  int n,x,k=1;
  scanf("%d",&n);
  for(;;k++)for(x=100;x>=0;x--) if (n/52==7*x+21*k) {printf("%d\n%d",x,k);return 0;}
}
