//약수 개수

#include <stdio.h>

int main() {
  int list[50001] = {0,};
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {
      list[j]++;
    }
  }

  for (int i = 1; i <= n; i++)
    printf("%d ", list[i]);
  return 0;
}
