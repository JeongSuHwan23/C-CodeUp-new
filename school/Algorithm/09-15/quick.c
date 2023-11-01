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

