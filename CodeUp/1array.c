//2023-08-14

//codeup 1407 문자열 출력
#include <stdio.h>
int main() {
	char str[100];
    scanf("%[^\n]s", str);
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != ' ') printf("%s", str[i]);
    }
}

//codeup 1412 알파벳 갯수 출력
#include <stdio.h>
int main() {
	char str[90];
    scanf("%[^\n]s", str);
    for(int i=97; i<123; i++){
        int num=0;
        for(int j=0; str[j]!='\0'; j++){
            if(str[j]==i) num++;
        }
        printf("%c:%d\n", i, num);
    }
}

//codeup 1425 자리 배치
#include <stdio.h>
int main() {
    int n, c, k=0, temp;
	int a[100];
    scanf("%d %d", &n, &c);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
        k++;
        if(k==c){
            printf("\n");
            k=0;
        }
    }
}