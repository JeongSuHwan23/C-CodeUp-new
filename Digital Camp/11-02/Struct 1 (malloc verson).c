#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LEN 10
#define MAX_PERSON_CNT 3

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
}Person;

void inputData(Person* p); //사람의 정보 입력
void outputData(Person* p); //사람의 정보 출력

int main(){
    int i;
    Person* p[MAX_PERSON_CNT];

    for (i = 0; i < MAX_PERSON_CNT; i++) {
        p[i] = (Person *) malloc(sizeof(Person));
    }

    for (i = 0; i < MAX_PERSON_CNT; i++) {
        inputData(p[i]);
    }

    for (i = 0; i < MAX_PERSON_CNT; i++) {
        outputData(p[i]);
    }

    for (i = 0; i < MAX_PERSON_CNT; i++) {
        free(p[i]);
    }
}

void inputData (Person *p){
    scanf("%s %d", p->name, &(p->age));
}

void outputData (Person *p){
    printf("%s, %d\n", p->name, p->age);
}


//typedef struct {
//    int x;
//    int y;
//}Point;
//
//int main(){
//    Point* p = malloc(sizeof(Point));
//    p->x = 10;
//    p->y = 20;
//    print("%d %d", p->x, p->y);
//}
