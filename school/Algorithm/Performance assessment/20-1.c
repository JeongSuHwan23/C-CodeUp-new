//음수 포함 정렬

#include <stdio.h>

int main() {
  int list[100];
  int n, i, j, temp;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &list[i]);

  for (i = n - 1; i > 0; i--) {
    for (j = 0; j < i; j++) {
      if (list[j] > 0 && list[j + 1] < 0) {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }

  for (i = 0; i < n; i++)
    printf("%d ", list[i]);

  return 0;
}
