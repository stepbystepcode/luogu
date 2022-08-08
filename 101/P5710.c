#include <stdio.h>
int main(void)
{
  int i,a,b,c,d,t1,t2;
  scanf("%d",&i);
  t1=(i%2==0)?1:0;
  t2=(i>4&&i<=12)?1:0;
  printf("%d %d %d %d\n",(t1+t2==2)?1:0,(t1+t2>=1)?1:0,(t1+t2==1)?1:0,(t1+t2==0)?1:0);
  return 0;
}
