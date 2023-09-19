//2023-08-15

//codeup 1441 버블 정렬
#include <stdio.h>
int a[10001];
int n, i, j, temp;
int main() {
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        scanf("%d", &a[i]);

    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}


//2023-09-10

//codeup 1442 선택
#include <stdio.h>
int a[10001];
int n, i, j, temp, min;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=1; i<n; i++) {
        min=i;
        for (j=i+1; j<=n; j++) {
            if(a[j]<a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}

//codeup 1443 삽입
#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=2; i<=n; i++)
    {
        key=a[i];
        for(j=i-1; j>=0 && key<a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }

    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}