//선택 정렬
#include <stdio.h>

int main() {
    int list[] = {5, 3, 8, 1, 2, 7};
    int index, min, temp, i, j, size, k;
    size = sizeof(list) / sizeof(int);

    // 선택 정렬 알고리즘을 사용하여 배열을 정렬합니다.
    for (i = 0; i < size - 1; i++) {
        index = i;  // 현재 인덱스를 선택합니다.

        // 현재 인덱스 다음부터 배열을 순회하면서
        // 최소값을 가진 원소의 인덱스(index)를 찾습니다.
        for (j = i + 1; j < size; j++) {
            if (list[j] < list[index]) {
                index = j;
            }
        }

        // 현재 인덱스와 최소값을 가진 원소의 인덱스를 교환합니다.
        temp = list[index];
        list[index] = list[i];
        list[i] = temp;

        // 현재 상태를 출력합니다.
        for (k = 0; k < size; k++) {
            printf("%d ", list[k]);
        }
        printf("\n");
    }

    // 정렬된 배열을 출력합니다.
    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
