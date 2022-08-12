//半成品
#include <stdio.h>
#include <string.h>
int main(void)
{
  int n,x;
  scanf("%d %d",&n,&x);
  char * arr = "";
  for (int i = 1; i <= n; i++) {
    sprintf(str,"%d",i);
    strcat(arr,str);
    printf("%s\n",arr);
  }
  return 0;
}
