#include <stdio.h>
#define MAX_STUDENT 64

int cnt=1, n;

void quicksort(int list[], int left, int right);
int partiiton(int list[], int left, int right);

int main() {
  int student[MAX_STUDENT];

  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &student[i]);

  quicksort(student, 0, n - 1);
  return 0;
}

void quicksort(int list[], int left, int right) {
  int q;
  if (left < right) {
    q = partiiton(list, left, right);
    printf("%d단계 : ", cnt++);
    for (int i = 0; i < n; i++)
      printf("%d ", list[i]);
    printf("\n");
    quicksort(list, left, q - 1);
    quicksort(list, q + 1, right);
  }
}

int partiiton(int list[], int left, int right) {
  int pivot, low, high, temp;
  low = left;
  high = right + 1;
  pivot = list[left];
  do {
    do {
      low++;
    } while (pivot < list[low]);
    do {
      high--;
    } while (pivot > list[high]);
    if (low < high) {
      temp = list[low];
      list[low] = list[high];
      list[high] = temp;
    }
  } while (low < high);
  temp = list[high];
  list[high] = list[left];
  list[left] = temp;
  return high;
}
