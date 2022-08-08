#include <stdio.h>
int main(void)
{
  float m,h,bmi;
  scanf("%f %f",&m,&h);
  bmi=m/(h*h);
  if (bmi<18.5) printf("Underweight\n");
  else if (bmi>=18.5&&bmi<24) printf("Normal\n");
  else printf("%.6g\nOverweight\n",bmi);
  return 0;
}
