#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 3

typedef int element;
typedef struct{
    element data[MAX_STACK_SIZE];
    element top;
}Stack;

void initStack(Stack *s);
bool isFull(Stack *s);
bool isEmpty(Stack *s);
void push(Stack *s, element data);
element pop(Stack *s);
element peek(Stack *s);

int main(){
  Stack *s = malloc(sizeof(Stack));
  int choice, push_data, pop_data;

  initStack(s);

  do{
    printf("1:push, 2:pop, 0:exit : ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        if(isFull(s)) {
          printf("stack is full\n");
          break;
        }
        printf("data input : ");
        scanf("%d", &push_data);
        push(s, push_data);
        break;
      case 2:
        pop_data = pop(s);
        if (pop_data == 0)
          printf("stack is empty\n");
        else
          printf("pop data : %d\n", pop_data);
        break;
      case 0:
        break;
      default:
        printf("wrong.\n");
    }
  }while (choice != 0);
}

void initStack(Stack *s){
  s->top = -1;
}

bool isFull(Stack *s){
  return (s->top == MAX_STACK_SIZE - 1);
}

bool isEmpty(Stack *s){
  return (s->top == -1);
}

void push(Stack *s, element data){
  s->data[++s->top] = data;
  return;
}

element pop(Stack *s) {
  if (isEmpty(s))
    return 0;
  return s->data[s->top--];

}

element peek(Stack *s){
  if (isEmpty(s))
    return 0;
  return s->data[s->top];
}