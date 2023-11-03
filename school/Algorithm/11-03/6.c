#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* IntExtract(char s[], int s_len);
int CountDivisor(int k);

int main(){
    int num;
    char str[100];
    scanf("%s", str);
    num = IntExtract(str, strlen(str));
    printf("%d\n", num);
    printf("%d", CountDivisor(num));

}

char* IntExtract(char s[], int s_len){
    int n=0;
    for(int i=0; i<s_len; i++){
        if (s[i]>='0' && s[i]<='9'){
            n = n * 10 + s[i]-'0';
        }
    }

    return n;
}

int CountDivisor(int k){
    int count_div = 2;
    for(int i=2; i<=k/2; i++){
        if(k%i==0)
            count_div++;
    }
    return count_div;
}