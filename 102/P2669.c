#include <stdio.h>
int main(void)
{
  int k,n=0,s=0,i=0,j=0;
  scanf("%d",&k);
  for (i = 0; ; i++) {
    for (j = 0; j < i; j++) {
      s+=i;
      n++;
      if(n>=k) {printf("%d\n",s);return 0;}
    }
  }
}
