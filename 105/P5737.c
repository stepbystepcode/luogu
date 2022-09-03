#include <stdio.h>
int main(void)
{
  int start,end,n=0,years[1500];
  scanf("%d %d",&start,&end);
  for (int i = start;i <= end; i++) if(i%4==0&&i%100!=0||i%400==0) {years[n]=i;n++;}
  printf("%d\n",n);
  for(int i=0;i<n;i++) printf("%d ",years[i]);
  printf("\n");
  return 0;
}
