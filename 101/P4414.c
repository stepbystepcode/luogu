#include <stdio.h>
int main(void)
{
  int a,b,c,t;
  char order[3];
  scanf("%d %d %d",&a,&b,&c);
  scanf("%s",order);
  if ( a > b ){t = a;a = b;b = t;}
  if ( a > c ){t = a;a = c;c = t;}
  if ( b > c ){t = b;b = c;c = t;}
  for (int i = 0; i < 3; i++) {
    if (order[i]=='A') printf("%d ",a);
    if (order[i]=='B') printf("%d ",b);
    if (order[i]=='C') printf("%d ",c);
  }
  printf("\n");
  return 0;
}
