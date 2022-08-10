#include <stdio.h>
int main(void)
{
  int x,n,a,b;
  scanf("%d %d",&x,&n);
  a=x+n-1;//算上第一周之前的总天数
  b=a/7;//总周数
  a%=7;//除去完整周剩下的天数
  b*=2;//周六周日数
  if (a==6) b+=1;//如果剩余天数为六，加一个周六
  if (x==7) b-=1;//如果剩余天数为七，少一个周六
  printf("%d\n",250*(n-b));
  return 0;
}
