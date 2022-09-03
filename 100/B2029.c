#include <stdio.h>
int main(void)
{
  int h,r,n=0;
  double d=0,v=0;
  scanf("%d %d",&h,&r);
  v=3.14*r*r*h/1000;
  while(d<20){
    n++;
    d+=v;
  }
  printf("%d\n",n);
  return 0;
}
