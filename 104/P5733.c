#include <stdio.h>
int main(void)
{
  char str[101];
  scanf("%s",str);
  for(int i=0;i<100;i++) if (str[i]>='a'&&str[i]<='z') str[i]-=32;
  puts(str);
  return 0;
}
