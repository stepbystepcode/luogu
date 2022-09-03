#include <stdio.h>
#include <string.h>
int main(void)
{
  char operator;
  char str1[5],str2[5],str3[10];
  int n,n1,n2,n3;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%c %d %d",&operator,&n1,&n2);
    switch (operator) {
      case 'a':
        n3=n1+n2;printf("%d+%d=%d\n",n1,n2,n3);
        break;
      default:
        break;
    }
    sprintf(str1, "%d", n1);
    sprintf(str2, "%d", n2);
    sprintf(str3, "%d", n3);
    printf("%lu\n",strlen(str1)+strlen(str2)+strlen(str3)+2);
  }
  return 0;
}
