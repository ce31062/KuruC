#include <stdio.h>
int main(void)
{
  int no;
  scanf("%d", &no);
  if (no == 1) {
    printf("野比のび太\n");
  } else if (no == 2) {
    printf("源静香\n");
  } else if (no == 3) {
    printf("剛田武\n");
  } else if (no == 4) {
    printf("骨川スネ夫\n");
  } else {
    printf("そんな番号の人は存在しない\n");
  }
  return 0;
}
