#include <stdio.h>
int main(void)
{
  int i;
  scanf("%d",&i);
  printf("Today, I ate %d apple%s.\n",i,(i>1)?"s":"");
  return 0;
}
