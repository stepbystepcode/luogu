#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
int main(void)
{
  int m,t,s;
  scanf("%d %d %d",&m,&t,&s);
  if (t==0) {
    printf("0\n");
  }else if (s%t==0){
    printf("%d\n",max(m-s/t,0));
  }else{
    printf("%d\n",max(m-s/t-1,0));
  }
  return 0;
}
