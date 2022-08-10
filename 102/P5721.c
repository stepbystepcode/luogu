#include <stdio.h>
int main(void)
{
  int n,j=1;//j是1-15,n是输入的数
  scanf("%d",&n);
  int b=n;//b是初始n的备份
  int print_n=0;//print_n是打印的次数
  for (int i = 0; i < b; i++) {
    while ( print_n!=n ) {
      printf("%.2d",j);
      j++;
      print_n++;
    }
    print_n=0;
    n--;
    printf("\n");
  }
  return 0;
}
