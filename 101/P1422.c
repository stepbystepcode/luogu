#include <stdio.h>
int main(void)
{
  int kwh;
  float cost;
  scanf("%d",&kwh);
  if (kwh<=150) {
    cost = kwh*0.4463;
  }else if (kwh>150 && kwh<=400){
    cost = 66.945+(kwh-150)*0.4663;
  }else{
    cost = 183.52+(kwh-400)*0.5663;
  }
  printf("%.1f\n",cost);
  return 0;
}
