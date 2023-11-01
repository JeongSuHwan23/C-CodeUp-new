//합병 정렬
#include <stdio.h>
int sorted[100];

// 두 개의 정렬된 부분 배열을 병합하는 함수
void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;    // 첫 번째 부분 배열의 시작 인덱스
    j = mid + 1; // 두 번째 부분 배열의 시작 인덱스
    k = left;    // 병합된 배열의 시작 인덱스

    // 두 부분 배열을 비교하면서 작은 값을 sorted 배열에 저장
    while (i <= mid && j <= right) {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // 첫 번째 부분 배열이 남은 경우, 복사
    if (i > mid)
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];

        // 두 번째 부분 배열이 남은 경우, 복사
    else
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];

    // 병합된 결과를 원래 배열에 복사
    for (l = left; l <= right; l++)
        list[l] = sorted[l];
}

// 합병 정렬 함수
void merge_sort(int list[], int left, int right) {
    int mid;
    if (left < right) {
        mid = (left + right) / 2; // 배열을 중간으로 나눕니다.

        // 왼쪽과 오른쪽 부분 배열을 재귀적으로 정렬합니다.
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);

        // 정렬된 두 부분 배열을 병합합니다.
        merge(list, left, mid, right);
    }
}

int main() {
    int list[] = {27, 10, 12, 20, 25, 13, 15, 22};
    int n;
    n = sizeof(list) / sizeof(int);

    // 합병 정렬을 사용하여 배열을 정렬합니다.
    merge_sort(list, 0, n - 1);

    // 정렬된 배열을 출력합니다.
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;
}