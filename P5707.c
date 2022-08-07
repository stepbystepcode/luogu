#include <stdio.h>
int main(void)
{
  int a,s,v,t,hh,mm;
  scanf("%d %d",&s,&v);
  a = (s%v==0)?0:1;
  t=8*60-s/v-10-a;
  if (s/v+10>480) t+=60*24;
  hh=t/60;
  mm=t-hh*60;
  printf("%.2d:%.2d\n",hh,mm);
  return 0;
}
