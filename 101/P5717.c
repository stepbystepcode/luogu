#include <stdio.h>
int main(void)
{
  int a,b,c,t;
  scanf("%d %d %d",&a,&b,&c);
  if (a>=b) {t=a;a=b;b=t;}
  if (a>=c) {t=a;a=c;c=t;}
  if (b>=c) {t=b;b=c;c=t;}
  if (a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+c>b) {
    if (a*a+b*b==c*c) printf("Right triangle\n");
    if (a*a+b*b>c*c) printf("Acute triangle\n");
    if (a*a+b*b<c*c) printf("Obtuse triangle\n");
    if (a==b) printf("Isosceles triangle\n");
    if (a==b&&a==c) printf("Equilateral triangle\n");
  }
  else printf("Not triangle\n");
  return 0;
}
