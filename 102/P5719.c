#include <stdio.h>
int main(void)
{
  int n,k,len_a=0,len_b=0;
  double sum_a=0,sum_b=0;
  scanf("%d %d",&n,&k);
  for (int i = 1; i <= n; i++) {
    if (i%k==0) {sum_a+=i;len_a++;}
    else {sum_b+=i;len_b++;}
  }
  printf("%.1lf ",sum_a/len_a);
  printf("%.1lf\n",sum_b/len_b);
  return 0;
}
