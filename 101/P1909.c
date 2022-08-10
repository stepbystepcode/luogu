#include <stdio.h>
int main(void)
{
  int n,a,b,i=0;
  int cost=0;
  scanf("%d",&n);
  while (i<3) {
    int buy_n=0;
    scanf("%d %d",&a,&b);
    while (buy_n*a<n) buy_n++;
    if(cost==0) cost=buy_n*b;
    else if (cost>buy_n*b) cost=buy_n*b;
    i++;
  }
  printf("%d\n",cost);
  return 0;
}
