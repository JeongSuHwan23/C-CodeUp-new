//진약수 합

#include <stdio.h>

int main() {
  int n, sum = 0;
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
      if (n / 2 == i) {
        printf("%d ", i);
        break;
      }
      printf("%d + ", i);
    }
  }
  printf("= %d", sum);
  return 0;
}
