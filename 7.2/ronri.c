#include <stdio.h>
int main(void)
{
  int suuti;  printf("適当な整数を入力してください:");
  scanf("%d",&suuti);
  if (suuti >= 8 && suuti <= 12) printf("8以上12以下の数値です。\n");
  if (!(suuti >= 8 && suuti <=12)) printf("8未満もしくは12より大きい数値です。\n");
  return 0;
}

      
