#include <stdio.h>
#include <string.h>
int test(int n);
char a[11];
int main(void)
{
  scanf("%s",a);
  if (!strcmp(a,"0")) {printf("0\n");return 0;}
  if (a[0]=='-') printf("%c",'-');
  for (int i=11;i>=0;i--){
    if (a[i]=='-') continue;
    if (a[i]=='\0') continue;
    if (a[i]=='0'&&test(i)){
      continue;
    }
    printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}
int test(int n)
{
  for (int j=11;j>=n;j--){
    if(a[j]!='0'&&a[j]!='\0') return 0;
  }
  return 1;
}
