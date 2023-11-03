#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* DeleteSpace(char s[])
{
    char* str = malloc(sizeof(*s));
    int i, k = 0;

    for (i = 0; i < strlen(s); i++)
        if (s[i] != ' ') str[k++] = s[i];

    for (i=0; i < strlen(str); i++)
        if (str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    str[k] = '\0';
    return str;
}

int main() {
    char s[1000];
    scanf("%[^\n]s", s);
    printf("%s", DeleteSpace(s));
    return 0;
}