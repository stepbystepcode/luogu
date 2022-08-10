#include <stdio.h>
int main(void)
{
  char isbn[13];
  int a=1,check_num;
  scanf("%s",isbn);
  for (int i = 0; i < 11; i++) {
    if (isbn[i]=='-') continue;
    check_num+=a*(isbn[i]-'0');
    a++;
  }
  check_num%=11;
  if (check_num!=10&&check_num==isbn[12]-'0') printf("Right\n");
  else if (check_num==10&&isbn[12]=='X') printf("Right\n");
  else{
    for (int i = 0; i < 12; i++) printf("%c",isbn[i]);
    if (check_num==10) printf("X\n");
    else printf("%d\n",check_num);
  }
  return 0;
}
