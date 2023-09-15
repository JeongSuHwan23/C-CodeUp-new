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

//퀵 정렬
#include <stdio.h>

int partiiton(int list[], int left, int right){
    int pivot, low, high, temp;
    low = left;
    high = right+1;
    pivot = list[left];
    do{
        do{
            low++;
        }while(pivot>list[low]);
        do{
            high--;
        }while(pivot<list[high]);
        if(low<high){
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        }
    }while(low<high);
    temp = list[high];
    list[high] = list[left];
    list[left] = temp;
    return high;
}

void quicksort(int list[], int left, int right){
    int q;
    if(left<right){
        q = partiiton(list, left, right);
        for(int i=0; i<9; i++)
            printf("%d ", list[i]);
        printf("\n");
        quicksort(list, left, q-1);
        quicksort(list, q+1, right);
    }
}

int main(){
    int list[] =  {5,3,8,4,9,1,6,2,7};
    int n;
    n = sizeof(list)/sizeof(int);
    quicksort(list, 0, n-1);
    for(int i=0; i<n; i++)
        printf("%d ", list[i]);
}