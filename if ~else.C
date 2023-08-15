//2023-07-15
//코드업 1170 학년과 반은 한자리, 번호는 두자리로 출력
#include <stdio.h>
int main(){
    int g, c, n; //g=학년, c=반, n=번호
    scanf("%d %d %d", &g, &c, &n);
    if(n<10) c*=10; //번호가 10미만이면 반에 10을 곱해서 0을 붙여서 출력한다
    printf("%d%d%d", g, c, n);
}

//코드업 1171 학년은 한자리, 반은 두자리, 번호는 세자리로 출력
#include <stdio.h>
int main(){
    int g, c, n; //g=학년, c=반, n=번호
    scanf("%d %d %d", &g, &c, &n);
    if(c<10) //반의 자릿수를 확인 (한자리면 앞에 0을 붙여서 출력)
    {
        if(n<10) printf("%d0%d00%d", g, c, n); //번호의 자릿수를 확인 (한자리면 앞에 00을 붙여서 출력)
        else if (n<100) printf("%d0%d0%d", g, c, n); //두자리면 앞에 0을 붙여서 출력
        else printf("%d0%d%d", g, c, n); //세자리면 그대로 출력
    }
    else //반의 자릿수를 확인 (두자리면 그대로 출력)
    { 
        if(n<10) printf("%d%d00%d", g, c, n); 
        else if (n<100) printf("%d%d0%d", g, c, n);
        else printf("%d%d%d", g, c, n);
    }
 }

//코드업 1172 세 수 정렬하기 (low -> high)
#include <stdio.h> 
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) //a가 b보다 클 때
    {
        if(c>a) printf("%d %d %d", b, a, c); //c가 가장 클 때
        else{
            if(b>c) printf("%d %d %d", c, b, a); //c가 가장 작을 때
            else printf("%d %d %d", b, c, a); //c가 b보다는 크고 a보다는 작을 때
        }
    }
    else //b가 a보다 클 때
    {
        if(c>b) printf("%d %d %d", a, b, c);
        else{
            if(a>c) printf("%d %d %d", c, a, b);
            else printf("%d %d %d", a, c, b);
        }
    }
}

//코드업 1173 30분 전
#include <stdio.h>
int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if(m>=30) //30분 이상일 때
    {
        printf("%d %d", h, m-30); 
    }
    else //30분 미만일 때
    {
        m += 60; //1시간을 60분으로 바꿔서 m에 더한다
        if(h==0) printf("%d %d", h+23, m-30); // 0시일 때 1시간 전인 23시를 h에 더하고, 30분을 뺀다        
        else printf("%d %d", h-1, m-30); //0시가 아니면 h에서 1시간을 빼고, m에서 30분을 빼고 출력한다 
    }
}

//2023-07-16
//code up 1180 만능 휴지통
#include <stdio.h>
int main(){
    int n, m=0;
    scanf("%d", &n);
    m = ((n%10)*10 + n/10)*2; //n에 10울 나눈 나머지에 10을 곱해서 10의 자릿수로 만들고, n을 10으로 나눈 몫과 더한 후에 2를 곱한다.
    if(m>99) m = m-100; //100이 넘으면 100을 빼서 100의 자릿수를 무시하게 만든다.
    if(m>50) printf("%d\nOH MY GOD", m);
    else printf("%d\nGOOD", m);
    return 0;
}

//code up 1204 영어 서수로 표현
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n%10)>3 || (n%10)==0) printf("%dth", n); //뒷자리가 0 또는 4 이상인 수를 구분
    else{
        if(n/10==1) printf("%dth", n); //11, 12, 13을 구분
        else if(n%10==1) printf("%dst", n); //뒷자리가 1인 숫자 구분 (11제외) 
        else if(n%10==2) printf("%dnd", n); //뒷자리가 2인 숫자 구분 (12제외) 
        else printf("%drd", n); //뒷자리가 3인 숫자 구분 (13제외) 
    }
}

//code up 1205 최댓값
#include <stdio.h>
#include <math.h> //pow()를 사용할 때 필요
int main(){
    int a, b;
    float max=0;
    scanf("%d %d", &a, &b);
    if(max<a+b) max = a+b; // 게산한 값이 max보다 크면 max에 대입
    if(max<a-b) max = a-b;
    if(max<b-a) max = b-a;
    if(max<a*b) max = a*b;
    if(max<a/b) max = a/b;
    if(max<b/a) max = b/a;
    if(max<pow(a, b)) max = pow(a, b); //pow(a, b) = a를 b번 제곱해라
    if(max<pow(b, a)) max = pow(b, a);
    printf("%.6f", max); //소수점이하 6자리로 출력
}

//code up 1206 배수
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a==0) printf("%d*%d=%d", a, b/a, b);
    else if(a%b==0) printf("%d*%d=%d", b, a/b, a);
    else printf("none");
}

//code up 1207 윷놀이
#include <stdio.h>
int main(){
    int a, b, c, d, sum=5;
    scanf("%d %d %d %d", &a, &b, &c, &d); //윷의 상태를 입력받음
    sum = a+b+c+d; //윷의 상태를 더함
    if(sum==0) printf("모"); //0이면 하나도 뒤집어지지 않았으므로 모
    else if(sum==1) printf("도"); //1이면 1개가 뒤집어졌으므로 도
    else if(sum==2) printf("개"); //2이면 2개가 뒤집어졌으므로 개
    else if(sum==3) printf("걸"); //3이면 3개가 뒤집어졌으므로 걸
    else printf("윷"); //아무것도 아니라면 윷
}

//code up 1210 칼로리 계산 
#include <stdio.h>
int main(){
    int a, b, menu[5]={400, 340, 170, 100, 70}; //메뉴의 칼로리를 배열에 넣는다
    scanf("%d %d", &a, &b);
    if((menu[a-1]+menu[b-1])>500) printf("angry"); //메뉴의 칼로리를 더해서 비교 (배열은 0부터 시작해서 -1을 한다)
    else printf("no angry");
}

//code up 1212 삼각형 성립 조건
#include <stdio.h>
int main(){
    int a, b, c, max=0;
    scanf("%d %d %d", &a, &b, &c);
    max = ((a>b) && (a>c)) ? a : ((b>a) && (b>c)) ? b : c; //가장 큰 수를 구하여 max에 대입
    if(max<a+b+c-max) printf("yes"); //가장 큰 수가 나머지 두 수를 더한 값보다 작으로 yes를 출력
    else printf("no"); //아니면 no를 출력
}

//code up 1214 달의 마지막 날 (윤달판별)
#include <stdio.h>
int main(){
    int y, m;
    scanf("%d %d", &y, &m);
    if(m==2){
        if(y%400==0 || (y%4==0 && y%100!=0)) printf("29"); //윤달인 조건
        else printf("28");
    }
    else if(m==4 || m==6 || m==9 || m==11) printf("30"); //마지막 날이 30일인 달
    else printf("31"); //마지막 날이 31일인 달

}

//code up 1216 컨설팅 회사
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); //a=홍보를 하지 않을 경우 수입, b=홍보를 할 경우의 수입, c=홍보비용
    if(a>b-c) printf("do not advertise"); //홍보를 하지 않는 경우가 유리한 경우
    else if(a<b-c) printf("advertise"); //홍보를 하는 경우가 유리한 경우
    else printf("does not matter"); //별 관계가 없는 경우
}

//code up 1218 삼각형 판단
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c){
        if(a==b && b==c) printf("정삼각형"); 
        else if(a==b || b==c || a==c) printf("이등변삼각형");
        else if((a*a)+(b*b)==c*c) printf("직각삼각형");
        else printf("삼각형");
    }
    else printf("삼각형아님");
}

//code up 1222 축구의 신 2
#include <stdio.h>
int main(){
    int time, score1, score2;
    scanf("%d %d %d", &time, &score1, &score2);
    for(int i=1; ; i++){
        if(time + (5*i) < 90) score1++; //투입하고 5분이 지나고부터 넣는 골의 갯수
        else break;
    }
    if(score1+1<score2) printf("lose"); //투입되고 곧바로 넣는 골을 계산하기 위해 +1을 한다
    else if(score1+1>score2) printf("win");
    else printf("same");
}

//code up 1224 분수 크기 비교
#include <stdio.h>
int main(){
    float a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a/b>c/d) printf(">");
    else if(a/b<c/d) printf("<");
    else printf("=");
}

//code up 1226 이번 주 로또
#include <stdio.h>
int main(){
    int sn[10], bn, ln[10], same=0, bsame=0; //sn=로또 당첨번호, bn=보너스 번호, ln=가지고 있는 로또 번호, same=로또 번호가 일치한 갯수, bsame=보너스 번호가 일치한 갯수
    for(int i=0; i<6; i++){
        scanf("%d", &sn[i]);
    }
    scanf("%d", &bn);
    for(int i=0; i<6; i++){
        scanf("%d", &ln[i]);
    }
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(sn[i]==ln[j]){
                same++; //번호가 일치하면 same에 +1
                break;
            }
        }
    }
    for(int i=0; i<6; i++){
        if(ln[i]==bn) bsame++; //보너스 점수가 bsame에 일치하면 +1
    }
    if(same==6) printf("1"); 
    else if(same==5 && bsame==1) printf("2");
    else if(same==5) printf("3");
    else if(same==4) printf("4");
    else if(same==3) printf("5");
    else printf("0");
}

//code up 1228 비만도 측정1
#include <stdio.h>
int main(){
    double h, w, sw=0, o=0; //float는 오류남 
    scanf("%lf %lf", &h, &w);
    sw = (h-100)*0.9;
    o = (w-sw) * 100/sw;
    if(o>20) printf("비만");
    else if(o>10) printf("과체중");
    else printf("정상");
}

//code up 1229 비만도 측정2
#include <stdio.h>
int main(){
    double h, w, sw=0, o=0;
    scanf("%lf %lf", &h, &w);
    if(h<150) sw = h-100;
    else if(h<160) sw = (h-150)/2+50;
    else sw = (h-100) * 0.9;
    o = (w-sw) * 100/sw;
    if(o>20) printf("비만");
    else if(o>10) printf("과체중");
    else printf("정상");
}

//codeup 1230 터널 통과
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=170) printf("CRASH %d", a);
    else if(b<=170) printf("CRASH %d", b);
    else if(c<=170) printf("CRASH %d", c);
    else printf("PASS");
}

