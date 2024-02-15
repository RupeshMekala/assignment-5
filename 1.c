#include <stdio.h>


// part-a
int main()
{
  int num;
  printf("Enter your number : ");
  scanf("%d",&num);
  int num_dig = 0;
  int temp = num;
  //part (a)
  while(temp>0){
    temp/=10;
    num_dig++;
  }
  printf("%d",num_dig);
  return 0;
}




//part-b
int main()
{
  int num,dig,sum;
  printf("Enter your number : ");
  scanf("%d",&num);
  sum = 0;
  int seenNum[10] = {0};

  while (num != 0){
      dig = num % 10;
      if (!seenNum[dig])
      {
        sum += dig;
        seenNum[dig] = 1;
      }
      num /= 10;
  }
  printf("The sum of the unique digits of Number is %d",sum);
  return 0;
}