//자릿수

#include <stdio.h>

// 각 자릿수의 합을 계산하는 함수
int digit_sum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;  // x의 일의 자리 숫자를 더함
    x /= 10;  // x를 10으로 나눠 일의 자리 숫자를 없앰
  }
  return sum;
}

int main() {
  int n;
  scanf("%d", &n);

  int max_num = 0;  // 최대 합을 가진 자연수
  int max_sum = 0;  // 최대 합

  for (int i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);
    int sum = digit_sum(num);  // 자릿수의 합 계산
    if (sum > max_sum || (sum == max_sum && num > max_num)) {
      max_sum = sum;
      max_num = num;
    }
  }

  printf("%d", max_num);

  return 0;
}
