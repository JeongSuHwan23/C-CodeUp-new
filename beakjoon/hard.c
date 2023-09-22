//09-22

//체스
#include <stdio.h>
int main(){
    int a[] = {1, 1, 2, 2, 2, 8};
    int b[6];
    int c[6]={0, };

    for(int i=0; i<6; i++){
        scanf("%d", &b[i]);
        if(a[i]!=b[i])
            c[i] = a[i]-b[i];
    }

    for(int i=0; i<6; i++)
        printf("%d ", c[i]);

}