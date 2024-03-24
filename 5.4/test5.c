#include<stdio.h>
int main(void)
{
  int drink = 198;
  int milk = 138;
  int money = 1000;
  double tax = 1.05;

  int payment = (int)((drink+milk*2)*tax);
  int change = money - payment;

  printf("%d円\n",change);
  
  return 0;
}
