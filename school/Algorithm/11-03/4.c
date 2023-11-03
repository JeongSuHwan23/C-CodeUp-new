#include <stdio.h>

int main() {
    int n, min=1000, max=0;
    int age[101] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &age[i]);
        if (age[i]>max)
            max = age[i];
        if(age[i]<min)
            min = age[i];
    }

    printf("%d", max-min);
    return 0;
}
