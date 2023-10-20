//버블정렬
#include <stdio.h>

int main() {
    int list[] = {5, 3, 8, 1, 2, 7};
    int temp, i, j, size, k;
    size = sizeof(list) / sizeof(int);

    // 버블 정렬 알고리즘을 사용하여 배열을 정렬합니다.
    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (list[j] > list[j + 1]) {
                // 현재 원소와 다음 원소를 비교하여 정렬합니다.
                temp = list[j + 1];
                list[j + 1] = list[j];
                list[j] = temp;
            }
        }

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