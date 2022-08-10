#include <stdio.h>
int main(void)
{
  float s,x=0,step=2;
  int i=0;
  scanf("%f",&s);
  while (x < s) {x+=step;step*=0.98;i++;}
  printf("%d\n",i);
  return 0;
}
