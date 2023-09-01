//선택 정렬
#include <stdio.h>

int main(){
    int list[] = {5,3,8,1,2,7};
    int index, min, temp, i, j, size, k;
    size = sizeof(list)/sizeof(int);

    for(i=0; i<size-1; i++){
        index = i;
        for(j=i+1; j<size; j++)
            if(list[j]<list[index]) 
                index = j;
        temp = list[index];
        list[index] = list[i];
        list[i] = temp;
        
        for(k=0; k<size; k++)
            printf("%d ", list[k]);
        printf("\n");
    }

    for(i=0; i<size; i++)
        printf("%d ", list[i]);
}

//삽입 정렬
#include <stdio.h>

int main(){
    int list[] = {5,3,8,1,2,7};
    int i, j, size, key, k;
    size = sizeof(list)/sizeof(int);

    for(i=1; i<size; i++){
        key = list[i];
        for(j=i-1; j>=0 && key<list[j]; j--)
            list[j+1] = list[j];
        list[j+1] = key;
        for(k=0; k<size; k++)
            printf("%d ", list[k]);
        printf("\n");
    }

    for(i=0; i<size; i++)
        printf("%d ", list[i]);
}

//버블정렬
#include <stdio.h>

int main(){
    int list[] = {5,3,8,1,2,7};
    int temp, i, j, size, k;
    size = sizeof(list)/sizeof(int);

    for(i=size-1; i>0; i--){
        for(j=0;j<i;j++){
            if(list[j]>list[j+1]){
                    temp=list[j+1];
                    list[j+1]=list[j];
                    list[j] = temp;
            }
        }
        for(k=0; k<size; k++)
            printf("%d ", list[k]);
        printf("\n");
    }

    for(i=0; i<size; i++)
        printf("%d ", list[i]);
}

