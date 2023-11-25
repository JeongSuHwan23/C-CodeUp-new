//주민등록번호

#include <stdio.h>

int main() {
  int birth, nmbr;
  char gen;
  scanf("%d-%d", &birth, &nmbr);
  birth /= 10000;
  nmbr /= 1000000;
  if (nmbr > 2) {
    birth = 20 - birth;
    if (nmbr == 3)
      gen = 'M';
    else
      gen = 'W';
  } else {
    birth = 120 - birth;
    if (nmbr == 1)
      gen = 'M';
    else
      gen = 'W';
  }
  printf("%d %c", birth, gen);
  return 0;
}
