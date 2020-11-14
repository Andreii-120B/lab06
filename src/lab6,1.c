#include <stdio.h>
#define LEN 15

int main()
{
  int centr = 0;
  char mass[LEN] = "Ivan";
  int shetSlov = 0;
  for (int i = 0; i < (LEN - 1); i++) {
    if (mass[i] != '\0') {
      shetSlov++;

    }
  }

  centr = ((LEN - shetSlov) / 2);
  char newmass[LEN] = {};
  for (int i = 0; i < (LEN - 1); i++) {
    newmass[i] = '_';
  }
  for (int i = 0; i < shetSlov; i++) {
    newmass[centr + i] = mass[i];
  
  }
  printf("%s\n", newmass);
}
