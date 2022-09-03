#include <stdio.h>
#include <math.h>
double dis(double x1,double y1,double x2,double y2);
int main(void)
{
  double xa,ya,xb,yb,xc,yc;
  scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&xc,&yc);
  double res=dis(xa,ya,xb,yb)+dis(xb,yb,xc,yc)+dis(xc,yc,xa,ya);
  printf("%.2lf\n",res);
  return 0;
}
double dis(double x1,double y1,double x2,double y2)
{
  double res=sqrt((double)(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return res;
}
