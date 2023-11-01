//삽입 정렬
#include <stdio.h>

int main() {
    int list[] = {5, 3, 8, 1, 2, 7};
    int i, j, size, key, k;
    size = sizeof(list) / sizeof(int);

    // 삽입 정렬 알고리즘을 사용하여 배열을 정렬합니다.
    for (i = 1; i < size; i++) {
        key = list[i];  // 현재 위치의 값을 key로 저장합니다.

        // key를 이전 위치의 값과 비교하며 적절한 위치로 이동시킵니다.
        for (j = i - 1; j >= 0 && key < list[j]; j--) {
            list[j + 1] = list[j];  // 더 큰 값을 오른쪽으로 이동합니다.
        }
        list[j + 1] = key;  // key를 올바른 위치에 삽입합니다.

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
