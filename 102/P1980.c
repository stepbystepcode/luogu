#include <stdio.h>
#include <string.h>
int main(void)
{
  int n,x,count;
  scanf("%d %d",&n,&x);
  for (int i = 1; i <= n; i++) {
    char str[7]={0};
    sprintf(str,"%d",i);
    for (int j=0; j < strlen(str);j++) if(str[j]==(char)(x+48)) count++;
  }
  printf("%d\n",count);
  return 0;
}
