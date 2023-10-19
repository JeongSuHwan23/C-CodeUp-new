#include <stdio.h>

typedef struct {
    char name[10];
    int age;
}Person;

void inputData(Person *);
void outputData(Person *);

int main(){
    int n;
    scanf("%d", &n);
    Person p[n];

    for(int i=0; i<n; i++)
        inputData(p+i);

    for(int i=0; i<n; i++)
        outputData(p+i);
}

void inputData (Person *p){
    scanf("%s %d", p->name, &p->age);
}

void outputData (Person *p){
    printf("%s, %d\n", p->name, p->age);
}