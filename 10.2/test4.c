#include <stdio.h>

int main(void)
{
  int score;

  do {
    printf("点数を入力してください:");
    scanf("%d",&score);
  } while (score < 0 || score > 100);

  printf("入力された点数は%dです。\n",score);

  return 0;
}
