int rank[2][100];
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    rank[1][i] = 1;
    scanf("%d", &rank[0][i]);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(rank[0][i] < rank[0][j])
        rank[1][i]++;
    }
    printf("%d ", rank[1][i]);
  }

  return 0;
}
