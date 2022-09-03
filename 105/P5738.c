#include <stdio.h>
double compute(int score[],int len);
int main(void)
{
  int m,n;
  double max=0;
  scanf("%d %d",&n,&m);
  int score[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d",&score[i][j]);
    }
    if (compute(score[i],m)>max) max=compute(score[i],m);
  }
  printf("%.2lf\n",max);
  return 0;
}
double compute(int score[],int len)
{
  int max=score[0],min=score[0];
  double sum=0;
  for (int i = 0; i < len; i++) {
    if (score[i]>max) max=score[i];
    if (score[i]<min) min=score[i];
    sum+=score[i];
  }
  sum=sum-max-min;
  return sum/(len-2);
}
