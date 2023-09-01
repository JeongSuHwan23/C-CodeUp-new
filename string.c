//2023-08-14

//codeup 1406 love
#include <stdio.h>
#include <string.h>

int main() {
    char str[3];
    scanf("%s", &str);
    if(strcmp (str == 'love') == 0){
        printf("I love you.");
    }
    else{
        return 0;
    }
}

//codeup 1408 암호 처리
#include <stdio.h>

int main() {
    char str[20];
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]+2);
    }
    printf("\n");
    for(int i=0;  str[i]!='\0'; i++){
        printf("%c", (str[i]*7)%80+48);
    }
}

//codeup 1414 C언어를 찾아라
#include <stdio.h>
int main() {
    char str[100];
    int n1=0, n2=0;
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'c' || str[i] == 'C'){
            if(str[i+1]=='c' || str[i+1]=='C')
                n2++;
        n1++;
        }
    }
    printf("%d\n%d", n1, n2);
}

//codeup 1418 t를 찾아라
#include <stdio.h>
int main() {
    char S[10];
    int j=0;
    int T[10] = {0, };
    scanf("%s", S);
    for(int i=0; S[i]!='\0'; i++){
        if(S[i]=='t'){
            T[j] = i+1;
            j++;
        }
    }
    for(int i=0; T[i]!='\0'; i++){
        if(T[i]!=0)
            printf("%d ", T[i]);
    }
    return 0;
}

//codeup 1419 love2
#include <stdio.h>
int main() {
    int count=0;
    char str[100];
    scanf("%[^\n]s", str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]+str[i+1]+str[i+2]+str[i+3]==438){
            count++;
            i += 3;
        }
    }
    printf("%d", count);
}

//2023-08-23

//codeup 1733 I.O.I
#include <stdio.h>
int main(){
    char I[100] = {0,};
    scanf("%s", I);
    if(I[0]=='I' && I[1]=='O' && I[2]=='I' && I[3]=='\0')
        printf("IOI is the International Olympiad in Informatics.");
    else
        printf("I don't care.");
}