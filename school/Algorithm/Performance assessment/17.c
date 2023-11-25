//순환 알고리즘 실습 (2진수 변환)

#include <stdio.h>

void f(int n) {
  if (n < 1)
    return;
  f(n / 2);
  printf("%d", n % 2);

}

int main() {
  int n;
  scanf("%d", &n);
  f(n);
  return 0;
}
