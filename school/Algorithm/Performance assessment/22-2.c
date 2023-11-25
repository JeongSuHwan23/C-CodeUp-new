//뒤집고 그 수가 소수이면 출력

#include <stdio.h>
#include <stdbool.h>

int reverse(int x);

bool isPrime(int x);

int main() {
  int n, data, result;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &data);
    result = reverse(data);
    if (isPrime(result))
      printf("%d ", result);
  }
}

int reverse(int x) {
  int temp = 0;
  while (x) {
    temp = (temp * 10) + (x % 10);
    x = x / 10;
  }
  return temp;
}

bool isPrime(int x) {
  if (x == 1) return false;
  for (int i = 2; i < x; i++)
    if (x % i == 0) return false;
  return true;
}