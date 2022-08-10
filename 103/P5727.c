#include <stdio.h>
int main(void)
{
  int n,i=0,a[200];
  scanf("%d",&n);
  a[0]=n;
  if (n==1) {printf("1\n");return 0;}
  i++;
  while (n!=1){
    a[i]=(n%2!=0)?(a[i]=n*3+1):(a[i]=n/2);
    n=a[i];
    i++;
  }
  while (i>=0){
    printf("%d ",a[i]);
    i--;
  }
  printf("\n");
  return 0;
}
