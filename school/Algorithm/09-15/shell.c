// 쉘 정렬 함수
#include <stdio.h>

// list[]: 정렬할 배열
// first: 정렬을 시작할 첫 번째 인덱스
// last: 정렬을 마칠 마지막 인덱스
// gap: 간격 값

void insertsort(int list[], int first, int last, int gap) {
    int i, j, key;

    // 부분 배열을 간격(gap)만큼 증가시키며 삽입 정렬 수행
    for (i = first + gap; i <= last; i = i + gap) {
        key = list[i];
        for (j = i - gap; j >= first && key < list[j]; j = j - gap)
            list[j + gap] = list[j];
        list[j + gap] = key;
    }
}

int main() {
    int list[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
    int i, j, n, gap;
    n = sizeof(list) / sizeof(int);

    // 간격(gap)을 조정하면서 쉘 정렬 수행
    for (gap = n / 2; gap > 0; gap = gap / 2) {
        // 짝수 간격(gap)을 홀수로 변환
        if (gap % 2 == 0)
            gap++;

        // 각 부분 배열에 대해 삽입 정렬 수행
        for (i = 0; i < gap; i++)
            insertsort(list, i, n - 1, gap);
    }

    // 정렬된 배열 출력
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;
}