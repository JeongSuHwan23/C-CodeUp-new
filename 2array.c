//2023-08-15

//codeup 1099 성실한개미
#include <stdio.h>

int main(){
    int wall[10][10];
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            scanf("%d", &wall[i][j]);
        }
    }
    i=1;
    j=1;
    while(1){
        if(wall[i][j]==0){
            wall[i][j] = 9;
            j++;
        }
        else if(wall[i][j]==1){
            i += 1;
            j -= 1;
        }
        else {
            wall[i][j] = 9;
            break;
        }
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", wall[i][j]);
        }
        printf("\n");
    }
}

//codeup 1461 2차원 배열 순서대로 채우기 1-2
#include <stdio.h>

int main(){
    int n, i, j;
    int num=1;
    scanf("%d", &n);
    int array[n][n];
    for(i=0; i<n; i++){
        for(j=n-1; j>=0; j--){
            array[i][j] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1462 2차원 배열 순서대로 채우기 1-3
#include <stdio.h>

int main(){
    int n, i, j;
    int num=1;
    scanf("%d", &n);
    int array[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            array[j][i] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1463 2차원 배열 순서대로 채우기 1-4
#include <stdio.h>

int main(){
    int n, i, j;
    int num=1;
    scanf("%d", &n);
    int array[n][n];
    for(i=0; i<n; i++){
        for(j=n-1; j>=0; j--){
            array[j][i] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1464 2차원 배열 순서대로 채우기 1-5
#include <stdio.h>

int main(){
    int n, m, i, j;
    int num=1;
    scanf("%d %d", &n, &m);
    int array[n][m];
    for(i=n-1; i>=0; i--){
        for(j=m-1; j>=0; j--){
            array[i][j] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1465 2차원 배열 순서대로 채우기 1-6
#include <stdio.h>

int main(){
    int n, m, i, j;
    int num=1;
    scanf("%d %d", &n, &m);
    int array[n][m];
    for(i=n-1; i>=0; i--){
        for(j=0; j<m; j++){
            array[i][j] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1466 2차원 배열 순서대로 채우기 1-7
#include <stdio.h>

int main(){
    int n, m, i, j;
    int num=1;
    scanf("%d %d", &n, &m);
    int array[n][m];
    for(j=m-1; j>=0; j--){
        for(i=n-1; i>=0; i--){
            array[i][j] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//codeup 1467 2차원 배열 순서대로 채우기 1-8
#include <stdio.h>

int main(){
    int n, m, i, j;
    int num=1;
    scanf("%d %d", &n, &m);
    int array[n][m];
    for(j=m-1; j>=0; j--){
        for(i=0; i<n; i++){
            array[i][j] = num;
            num++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}