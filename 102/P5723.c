#include <stdio.h>
int iszhi(int x)
{
	int y;
	if(x==1) return 0;
	if(x==2) return 1;
	if(x>2)
	{
		for(y=2;y<x;y++) if(x%y==0) break; 
		if(y>=2&&y<x) return 0;
		else return 1;
  }
}
int main(void)
{
  int s=0,l,num;
  for (int i = 0;s+i<=l;i++) {
    if (iszhi(i)==1) {s+=i;printf("%d\n",i);num++;}
  }
  printf("%d\n",num);
  return 0;
}
