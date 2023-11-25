//A~B까지 합

#include <stdio.h>

int main() {
  int n, m, sum = 0;
  scanf("%d %d", &n, &m);
  for (int i = n; i < m; i++) {
    printf("%d + ", i);
    sum += i;
  }
  printf("%d = %d", m, sum + m);

  return 0;
}
