#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d",&n);
  for (int i=1;i<=n*n;i++){
    printf("%.2d",i);
    if (i%n==0) printf("\n");
  }
  printf("\n");
  int all=0,line=1,pn=0;
  for (int i=1;i<=n;i++) all+=i;
  for (int i=1;i<=all;i++){
    for (int j=n-line;j>0;j--) if(pn==0) printf("  ");
    printf("%.2d",i);
    pn++;
    if (pn==line){pn=0;printf("\n");line++;}
  }
  return 0;
}
