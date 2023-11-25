//가장 많이 사용된 숫자 구하기

#include <stdio.h>

int b[10];

int main() {
  char a[101];
  int max = -1, index;
  scanf("%s", a);
  for (int i = 0; a[i] != NULL; i++)
    b[a[i] - '0']++;
  for (int i = 0; i < 10; i++) {
    if (b[i] >= max) {
      max = b[i];
      index = i;
    }
  }
  printf("%d", index);
}

