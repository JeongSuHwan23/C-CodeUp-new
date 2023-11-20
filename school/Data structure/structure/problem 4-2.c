#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int a[][COLS]);
void transMatrix(int a[][COLS],int b[][COLS]);
void printMatrix(int a[][COLS]);

int main(){
  int array1[ROWS+1][COLS+1];
  int array2[ROWS+1][COLS+1];
  inputMatrix(array1);
  transMatrix(array1,array2);
  printMatrix(array1);
  printf("\n   전치행렬 출력\n");
  printf("  --------------\n");
  printMatrix(array2);
  return 0;
}

void inputMatrix(int a[][COLS]){
  int i,j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      scanf("%d", &a[i][j]);
    }
  }
}

void transMatrix(int a[][COLS],int b[][COLS]){
  int i,j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      b[i][j] = a[j][i];
    }
  }
}

void printMatrix(int a[][COLS]){
  int i,j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      if(a[i][j] < 0)
        printf("  %d " , a[i][j]);
      else
        printf("   %d ", a[i][j]);
    }
    printf("\n");
  }
}
