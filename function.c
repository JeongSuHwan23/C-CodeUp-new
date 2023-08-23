//2023-08-23

//codeup 1526
#include <stdio.h>
#include <stdbool.h>

int n;

bool prime(int k)
{
  int i;
  for(i=2; i<k; i++)
    if(k%i == 0) //나누어 지면 중단 
      break;
  //k-1까지 모두 안 나뉘어져도 반복 중단 됨
  return i==k;
}

int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}

//codeup 1548
#include <stdio.h>

int n;

char grade(int k){
    k = k/10;
    if(k>=9) return 'A';
    else if(k>=8) return 'B';
    else if (k>=7) return 'C';
    else if (k>=6) return 'D';
    else return 'F';
}

int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}

