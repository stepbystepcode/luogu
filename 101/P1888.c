#include <stdio.h>
int gcd(int m,int n)
{
  if (n==0) return m;
  return gcd(n,m%n);
}
int main(void)
{
  int a,b,c,max,min;
  scanf("%d %d %d",&a,&b,&c);
  max = a>b ? a:b;
	max = c>max ? c:max;
  min = a<b ? a:b;
	min = c<min ? c:min;
  printf("%d/%d\n",min/gcd(max,min),max/gcd(max,min));
  return 0;
}
