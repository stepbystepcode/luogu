#include <stdio.h>
int main(void)
{
  int a,b;
  int c,d=0,i=1;//c是存储的最终输出，d是记录的历史最大值
  while (i<=7){
    scanf("%d %d",&a,&b);
    if (a+b>8&&a+b>d){d=a+b;c=i;}
    i++;
  }
  printf("%d\n",c);
  return 0;
}
