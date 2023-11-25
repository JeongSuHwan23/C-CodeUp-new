//배수합
#include <stdio.h>

int main() {
  int n, m, res = 0;
  scanf("%d %d", &n, &m);
  for (int i = 1; i * m <= n; i++) {
    res += i * m;
  }
  printf("%d", res);
  return 0;
}
