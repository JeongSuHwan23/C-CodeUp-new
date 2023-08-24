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

//2023-08-24

//codeup 1549 절댓값
#include <stdio.h>

long long int n;

long long int abs(long long int m){
  if(m<0) m *= -1;
  return m;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}

//codeup 1550 양의 제곱근
#include <stdio.h>

long long int n;

long long int sqrt(long long int N){
  long long int i, temp=0;
  for(i=0; i<=N; i++){
    if(i*i  > N)
      break;
    else 
      temp = i;
  }
  return temp;
}

int main(){
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}

//codeup 1551 원하는 값 위치
#include <stdio.h>

int n, d[100010], k;

int f(int m){
  int a=-1;
  for(int i=1; i<=n; i++)
    if(d[i]==m) {
      a = i;
      break;
    }
    return a;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}

//codeup 1552 소수 부분만
#include <stdio.h>

double x;

double f(double n){
  int m = (int)n;
  return n-m;
}

int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}

//codeup 1553 올림
#include <stdio.h>

double x;

long long int f(double y){
  long long int m = (long long int)y;
  if(y-m==0)
    return y;
  else{
    if(y>=0)
      return y+1-(y-m);
    else
      return y;
  }
}

int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}

//2023-08-25

//codeup 1554 내림
#include <stdio.h>
double x;

long long int f(double n){
  long long int k = (long long int) n;
  if(n-k==0)
    return n;
  else{
    if(n>=0)
      return n;
    else
      return n-1;
  }
}

int main(){
  scanf("%lf", &x);
  printf("%lld", f(x));
}

//codeup 1555 합 리턴
#include <stdio.h>

int n;

long long int f(int x){
  long long int sum=0;
  for(int i=0; i<=n; i++){
    sum += i;
  }
  return sum;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}

//codeup 1556 팩토리얼
#include <stdio.h>

int n;

long long int f(int x){
  if(x==0) return 0;
  long long int result=1;
  for(int i=1; i<=x; i++){
    result *= i;
  }
  return result;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}

//codeup 1557 약수 갯수
#include <stdio.h>

int n;

int f(int x){
  int count=0;
  for(int i=1; i<=x; i++){
    if(x%i==0)
      count++;
  }
  return count;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}

//codeup 1558 뒤집어 리턴
#include <stdio.h>

long long int n;

long long int (long long int x){
  while x>9{
    printf("%lld", x%10);
    x /= 10;
  }
  return x;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}

//codeup 1559 합 리턴
#include <stdio.h>

int n, m;

long long int f(int a, int b){
  return (long long int)a+b;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}

//codeup 1560 차이 리턴
#include <stdio.h>

int n, m;

long long int f(long long int a, long long int b){
  if(a>b)
    return a-b;
  else
    return b-a;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}