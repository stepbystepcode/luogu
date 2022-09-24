#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d",&n);
  n=n+1;
  int a[n][n];
  for (int i = 0; i <n; i++) {
    for (int j = 1; j <= i; j++) {
      if (i>1&&j>1&&i!=j) a[i][j]=a[i-1][j]+a[i-1][j-1];
      else a[i][j]=1;
      printf("%d ",a[i][j]);
    }
    if (i>0) printf("\n");
  }
  return 0;
}
