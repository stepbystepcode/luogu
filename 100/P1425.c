#include <stdio.h>
int main(void)
{
  int a,b,c,d,e,f,min;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  min = c*60+d-a*60-b;
  e = min/60;
  f = min-e*60;
  printf("%d %d\n",e,f);
  return 0;
}
