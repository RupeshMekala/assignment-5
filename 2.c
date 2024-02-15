#include <stdio.h>
int main()
{
  int d,quo,rem,div;
  printf("Enter values of dividend and divisor : ");
  scanf("%d%d",&div,&d);
  int temp = d;
  quo = 0;

  while(div-d>=0){
    rem = div - d;
    quo++; 
    d+=temp;
  }

  printf("Quotient is %d and remainder is %d",quo,rem);
  return 0;

}