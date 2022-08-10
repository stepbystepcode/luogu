#include <stdio.h>
int main(void)
{
  int a[100],i=0;
  while (1){
    scanf("%d",&a[i]);
    if (a[i]==0) break;
    i++;
  }
  i--;
  while (i>=0){
    printf("%d ",a[i]);
    i--;
  }
  printf("\n");
  return 0;
}
