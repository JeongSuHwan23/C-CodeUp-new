#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 10

typedef char element;
typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
}Stack;

void initStack(Stack *s);
bool isFull(Stack *s);
bool isEmpty(Stack *s);
void push(Stack *s, element data);
element pop(Stack *s);
element peek(Stack *s);

int main(){
  Stack *s = malloc(sizeof(Stack));
  element str[MAX_STACK_SIZE];

  initStack(s);

  printf("문자열 입력 : ");
  scanf("%s", str);

  for(int i=0; str[i]!=NULL; i++){
    push(s, str[i]);
  }

  for(int i=s->top; i>-1; i--){
    printf("%c", pop(s));
  }
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
  if(isFull(s))
    return;
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