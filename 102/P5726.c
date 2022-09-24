#include <stdio.h>
int main(void)
{
  int n,a[1000],max,min,sum=0;
  scanf("%d",&n);
  for (int i=0;i<n;i++) scanf("%d",&a[i]);
  max=a[0],min=a[0];
  for (int i=0;i<n;i++){
    if (a[i]>max) max=a[i];
    if (a[i]<min) min=a[i];
    sum+=a[i];
  }
  double score=(double)(sum-max-min)/(n-2);
  printf("%.2lf\n",score);
  return 0;
}
