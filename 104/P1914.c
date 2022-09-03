#include <stdio.h>
int main(void)
{
  int n;
  char str[51];
  scanf("%d",&n);
  scanf("%s",str);
  for(int i=0;i<50;i++) if(str[i]>='a'&&str[i]<='z'){
    if (str[i]+n>='a'&&str[i]+n<='z') str[i]+=n;
    else str[i]=str[i]-26+n;
  }
  puts(str);
  return 0;
}
