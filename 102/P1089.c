#include <stdio.h>
int main(void)
{
  int a[12],save=0,money=0,n;
  for (int i=0;i<12;i++) scanf("%d",&a[i]);
  for (int i=0;i<12;i++){
    money=money+300-a[i];
    while (money>=100){n++;money-=100;}
    if (money<0){printf("-%d\n",i+1);return 0;}
  }
  save=money+120*n;
  printf("%d\n",save);
  return 0;
}
