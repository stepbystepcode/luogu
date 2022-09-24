#include <stdio.h>
int main(void)
{
  int n,arr[10000],count=0,max;
  scanf("%d",&n);
  for (int i=0;i<n;i++) scanf("%d",&arr[i]);
  for (int i=0;i<n;i++) if (arr[i]+1==arr[i+1]) {count++;if (count>max) max=count;} else count=0;
  printf("%d\n",max+1);
  return 0;
}
