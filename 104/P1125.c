#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool prime(int num);
int main(void)
{
  int count[26]={0};
  char word[101];
  int max=0,min=0;
  scanf("%s",word);
  for (int i=0;i<strlen(word);i++) {
    count[word[i]-97]++;
  }
  for (int i=0;i<26;i++) {
    if (count[i]>max) max=count[i];
    if (min==0&&count[i]!=0) min=count[i];
    else if(min!=0&&count[i]<min&&count[i]!=0) min=count[i];
    //printf("%c:%d\n",i+97,count[i]);
  }
    printf("%s\n",prime(max-min)?"Lucky Word":"No Answer");
    printf("%d\n",prime(max-min)?max-min:0);
  return 0;
}
bool prime(int num)
{
  int a=0;
  if (num==0||num==1) return false;
  for(int i=2;i<num;i++) if(num%i==0) return false;
  return true;
}
