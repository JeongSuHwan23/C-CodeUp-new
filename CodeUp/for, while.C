//2023-07-17

//code up 1253 a부터 b까지 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<b) //a가 b보다 작을 때
    {
        for(int i=a; i<=b; i++) //i에 a를 대입하고 b보다 크면 break, 아니면 +1이 되는 for문
            printf("%d ", i); //a부터 b까지 출력
    }
    else //b가 a보다 클 때
    {
        for(int i=b; i<=a; i++) //i에 b를 대입하고 a보다 크면 break, 아니면 +1이 되는 for문
            printf("%d ", i); //b부터 a까지 출력
    }
}

//code up 1254 알파벳 출력
#include <stdio.h>
int main(){
    char a, b;
    scanf("%c %c", &a, &b);
    for(int i=a; i<=b; i++) 
        printf("%c ", (char)i); //i를 int -> char로 변환 후 출력
}

//code up 1255 두 실수 사이 출력 
#include <stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    for(double i=a; i<=b; i += 0.01) //i에 a를 대입하고 b보다 커지면 break, 아니면 +0.01이 되는 for문
        printf("%.2lf ", i);
}


//code up 1256 별 출력
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        printf("*");
}

//code up 1257 두 수 사이 홀수 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++)
        if(i%2==1) printf("%d ", i); //홀수면 i를 출력, 아니면 +1되는 for문
}

//2023-07-19
//codeup 1260 3의 배수의 합
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++) //a부터 b까지 실행되는 for문
        if(i%3==0) 
            sum += i; //3의 배수만 더한다
    printf("%d", sum);
}

//codeup 1265 구구단
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<10; i++) 
        printf("%d*%d=%d", n, i, n*i); 
}

//codeup 1266 n개의 수의 합
#include <stdio.h>
int main(){
    int a, n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){ //n번 입력을 받는 for문
        scanf("%d", &a);
        sum += a; 
    }
    printf("%d", sum);
}

//codeup 1267 n개의 수 중 5의 배수의 합
#include <stdio.h>
int main(){
    int a, n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a%5==0) sum += a;
    }
    printf("%d", sum);
}

//codeup 1268 n개의 수 중 홀수의 갯수
#include <stdio.h>
int main(){
    int a, n, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a%2==1) count += 1; //a가 홀수면 카운트한다
    }
    printf("%d", count);
}

//codeup 1269 수열의 값
#include <stdio.h>
int main(){
    int a, b, c, n, result; //시작 값(a), 곱할 값(b), 더할 값(c), 몇 번째 항인지 나타내는 정수(n)
    scanf("%d %d %d %d", &a, &b, &c, &n);
    result = a; //수열의 1항은 a다
    for(int i=2; i<=n; i++) //2항부터 n항까지 계산
        result = result*b+c;
    printf("%d", result);
}

//codeup 1270 1의 개수
#include <stdio.h>
int main(){
    int n, count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        if(i%10==1) count += 1; //뒷자리가 1이면 카운트한다
    printf("%d", count);
}

//codeup 1271 최댓값
#include <stdio.h>
int main(){
    int a, n, max=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(max<a) max = a; //입력된 수가 max보다 크면 max에 대입
    }
    printf("%d", max);
}

//codeup 1271 기부
#include <stdio.h>
int main(){
    int k, h;
    scanf("%d %d", &k, &h);
    if(k%2==0) k *= 5;
    else k = (k+1)/2;
    if(h%2==0) h *= 5;
    else h = (h+1)/2;
    printf("%d", k+h);
}

//codeup 1273 약수
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        if(n%i==0) printf("%d ", i); //n의 약수면 i을 출력
}

//codeup 1274 소수
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){ //1은 모두의 약수이므로 i는 2부터 시작한다
        if(i==n){ //만약 i가 n과 같으면 n의 약수는 1과 n뿐이므로 소수
            printf("prime");
            break; //break를 안 하면 다음 if문도 실행되므로 "not prime"도 출력된다
        }
        if(n%i==0){ //n이 i로 나눴을 때 나머지가 0이면 소수가 아님 (이 때 i!=1 && i!=n)
            printf("not prime");
            break; //break를 하지않으면 마지막에 "prime"이 출력된다
        }
    }
}

//codeup 1275 제곱
#include <stdio.h>
int main(){
    int k, n, a=1; //0제곱은 1이므로 a에 1을 대입한다 
    scanf("%d %d", &k, &n);
    for(int i=0; i<n; i++) //0제곱일 땐 실행되지 않는다
        a *=k;
    printf("%d", a);
    return 0;
}

//codeup 1276 팩토리얼
#include <stdio.h>
int main(){
    int n, mul=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        mul *= (n-i); 
    printf("%d", mul);
    return 0;
}

//codeup 1277 몇 번째 데이터 출력
#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n); //n>=1인 홀수
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(i==0) printf("%d ", k); //처음 입력받은 데이터를 출력
        if(i==n/2) printf("%d ", k); //중간 데이터 값을 출력
        if(i==(n-1)) printf("%d ", k); //마지막 데이터 값을 출력
    }
}

//2023-07-20
//codeup 1279 홀수는 더하고 짝수는 빼고 1
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1) sum += i;
        else sum -= i;
    }
    printf("%d", sum);
}

//codeup 1280 홀수는 더하고 짝수는 빼고 2
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1){ 
            sum += i;
            printf("+%d", i);
        }
        else{
            sum -= i;
            printf("-%d", i);
        }
    }
    printf("=%d", sum);
}

//codeup 1281 홀수는 더하고 짝수는 빼고 3
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1){ 
            if(i==a) printf("%d", i);
            else printf("+%d", i);
            sum += i;
        }
        else{
            printf("-%d", i);
            sum -= i;
        }
    }
    printf("=%d", sum);
}

//codeup 1282 제곱수
#include <stdio.h>
#include <math.h>
int main(){
    int n, t=0;
    scanf("%d", &n);
    t = sqrt(n); // sqrt(n) = n의 제곱근 (n은 int형이라 제곱근도 int로 나온다)
    for(int i=1; i<=n; i++){
        if((n-i)==t*t){
            printf("%d %d", i, t);
            return 0;
        }
    }
}

//codeup 1283 주식투자
#include <stdio.h>
int main(){
    double rate, lm=0; //rate = 변동폭(퍼센트 단위), lm = 총 수익 
    int day, fm; // day = 투자 일 수, fm = 투자한 액수
    scanf("%d %d", &fm, &day);
    lm = fm;
    for(int i=0; i<day; i++){
        scanf("%lf", &rate);
        lm = lm +lm*(rate/100); //변동폭에 대한 수익 변화
    }
    printf("%.0f\n", lm-fm); //순수익(총 수익(lm) - 투자한 비용(fm))
    if(lm>fm) printf("good"); 
    else if(lm<fm) printf("bad");
    else printf("same"); 
}

//2023-07-21
//codeup 1285 계산기 2
#include <stdio.h>
int main(){
    int n, result;
    char x;
    scanf("%d", &result);
    for(int i=1; ; i++){
        scanf("%c", &x);
        if(x=='='){
            printf("%d", result);
            return 0;
        }
        else{
            scanf("%d", &n);
            if(x=='+') result += n;
            else if(x=='-') result -= n;
            else if(x=='*') result *= n;
            else if(x=='/') result /= n; 
        }
    }
}

//codeup 1286 최댓값, 최솟값
#include <stdio.h>
int main(){
    int n, max=-1000001, min=1000001;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        if(n>max) max = n;
        if(n<min) min = n;
    }
    printf("%d %d", max, min);
}

//codeup 1287 구구단을 *로 출력
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<10; i++){
        for(int j=1; j<=n*i; j++){
            printf("*");
        }
        printf("\n");
    }
}

//codeup 1295 알파벳 대소문자 변환
#include <stdio.h>
int main(){
    char txt[1000]="";
    char trans_txt[1000]="";
    scanf("%s", txt);
    for(int i=0; txt[i]!='\0'; i++){
        if(txt[i] >= 65 && txt[i] <= 90) trans_txt[i] = txt[i]+32;
        else if(txt[i] >= 97 && txt[i] <=122) trans_txt[i] = txt[i]-32;
        else trans_txt[i] = txt[i];
    }
    printf("%s", trans_txt);
    return 0;
}

//223-08-14

//codeup 1355 삼각형 3
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i>0){
            for(int k=0; k<i; k++){
                printf(" ");
            }
        }
        for(int j=0; j<n-i; j++){
            printf("*");
        }
        printf("\n");
    }
}

//codeup 1356 사각형 2
#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i!=1 && i!=n && j!=1 && j!=n){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

//codeup 1357 삼각형 4
#include <stdio.h>
int main(){
    int n, i, j;
    int a=1;
    scanf("%d", &n);
    for(i=0; i<(n*2-1); i++){
        for(j=0; j<=i; j++){
            if(i>=n && j==n-a){
                a++;
                break;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

//codeup 1358 삼각형 5
#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(k=0; k<(n/2-i); k++){
            printf(" ");
        }
        for(j=0; j<(i*2+1); j++){
            printf("*");
        }
        if(j==n) break;
        printf("\n");
    }
}

//codeup 1361 별 계단
#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        printf("**\n");
    }
}

//codeup 1365 사각형 3
#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 || j==i || j==n-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//codeup 1366 사각형 4
#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 || j==i || j==n-i-1 || i==n/2 || j==n/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//codeup 1367 평행사변형 1
#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=i; j<n-1; j++){
            printf(" ");
        }
        for(k=0; k<n; k++){
            printf("*");
        }
        printf("\n");
    }
}

//codeup 1368 평행사변형 2
#include <stdio.h>
int main(){
    int h, k;
    char d;
    scanf("%d %d %c", &h, &k, &d);
    if(d=='L'){
        for(int i=0; i<h; i++){
            for(int l=0; l<i; l++){
                printf(" ");
            }
            for(int j=0; j<k; j++){
                printf("*");
            }
        printf("\n");
        }
    }
    else{
        for(int i=0; i<h; i++){
            for(int l=i; l<k; l++){
                printf(" ");
            }
            for(int j=0; j<k; j++){
                printf("*");
            }
            printf("\n");
        }
    }
} 