#include <stdio.h>
int main(void)
{
  int n,min,a;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%d",&a);
    if (i==0) min=a;
    if (a<min) min=a;
  }
  printf("%d\n",min);
  return 0;
}
