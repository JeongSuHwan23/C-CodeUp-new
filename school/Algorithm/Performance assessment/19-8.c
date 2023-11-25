//아나그램

#include <stdio.h>

int arr_1[60], arr_2[60];

int main() {
  char str[101];
  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++)
    if (str[i] >= 'A' && str[i] <= 'Z')
      arr_1[str[i] - 64]++;
    else
      arr_1[str[i] - 70]++;

  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++)
    if (str[i] >= 'A' && str[i] <= 'Z')
      arr_2[str[i] - 64]++;
    else
      arr_2[str[i] - 70]++;

  for (int i = 1; i < 53; i++) {
    if (arr_1[i] != arr_2[i]) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
}
