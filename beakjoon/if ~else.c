//2023-09-19

//사분면 고르기
#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x>=0){
        if(y>=0)
            printf("1");
        else
            printf("4");
    }
    else{
        if(y>=0)
            printf("2");
        else
            printf("3");
    }
}

//알람 시계
#include <stdio.h>
int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    if(m>=45)
        printf("%d %d", h, m-45);
    else{
        if(h==0)
            h=24;
        printf("%d %d", h-1, m+15);
    }
}

//오븐 시계
#include <stdio.h>
int main(){
    int crntHour, crntMin, time, longTime, finHour, finMin;
    scanf("%d %d", &crntHour, &crntMin);
    scanf("%d", &time);
    longTime = crntMin + time;
    if(longTime<60)
        printf("%d %d", crntHour, longTime);
    else{
        finHour = crntHour + longTime/60;
        finMin = longTime%60;
        if(finHour>23)
            finHour -= 24; 
        printf("%d %d", finHour, finMin); 
    }
}