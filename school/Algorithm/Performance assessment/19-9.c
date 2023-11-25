//분노유발자
#include <stdio.h>

int main(void) {
  int n, count = 0;
  int d[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &d[i]);

  int max = d[n - 1];

  for (int i = n - 2; i >= 0; i--) {
    if (d[i] > max) {
      max = d[i];
      count++;
    }
  }

  printf("%d", count);
  return 0;
}
