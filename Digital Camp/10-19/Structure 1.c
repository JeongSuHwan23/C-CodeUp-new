#include <stdio.h>
#define MAX_NAME_LEN 10
#define MAX_PERSON_CNT 3

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
}Person;

void inputData(Person *); //사람의 정보 입력
void outputData(Person *); //사람의 정보 출력

int main(){
    Person p[MAX_PERSON_CNT];

    for(int i=0; i<MAX_PERSON_CNT; i++)
        inputData(p+i);

    for(int i=0; i<MAX_PERSON_CNT; i++)
        outputData(p+i);
}

void inputData (Person *p){
    scanf("%s %d", p->name, &(p->age));
}

void outputData (Person *p){
    printf("%s, %d\n", p->name, p->age);
}