//这个失败了，因为还不会高精度。后续再说。
#include <stdio.h>
int factorial(int n){if (n!=1) return n*factorial(n-1);}
int main(void)
{
  int n;
  long long int s=0;
  scanf("%d",&n);
  for (int i = 1; i <= n; i++) s+=factorial(i);
  printf("%lld\n",s);
  return 0;
}
