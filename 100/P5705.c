#include <stdio.h>
int main(void)
{
  char a[5];
  scanf("%s",a);
  printf("%c%c%c%c%c\n",a[4],a[3],a[2],a[1],a[0]);
  return 0;
}
