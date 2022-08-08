#include <stdio.h>
int main(void)
{
  int n,t1,t2;
  scanf("%d",&n);
  t1=n*5;
  t2=n*3+11;
  printf("%s\n",(t1<t2)?"Local":"Luogu");
  return 0;
}
