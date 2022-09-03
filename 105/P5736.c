#include <stdio.h>
#include <stdbool.h>
bool prime(int num);
int main(void)
{
  int n,a[100];
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
    if (prime(a[i])) printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
bool prime(int num)
{
  int a=0;
  if (num==0||num==1) return false;
  for(int i=2;i<num;i++) if(num%i==0) return false;
  return true;
}
