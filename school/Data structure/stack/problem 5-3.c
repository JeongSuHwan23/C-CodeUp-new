#include <stdio.h>
#include <string.h>

#define STACK_SIZE 100

typedef char element;

typedef struct {
    element data[STACK_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
  s->top = -1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

int isFull(Stack *s) {
  return s->top == STACK_SIZE - 1;
}

void push(Stack *s, element item) {
  if (isFull(s)) {
    printf("Stack is full.");
  } else {
    s->data[++s->top] = item;
  }
}

element pop(Stack *s) {
  if (isEmpty(s)) {
    return '\0';
  } else {
    element poppedItem = s->data[s->top--];
    return poppedItem;
  }
}

int main() {
  Stack s;
  initStack(&s);

  char inputString[STACK_SIZE];
  printf("문자열 입력 : ");
  gets(inputString);

  int length = strlen(inputString);

  for (int i = 0; i < length; i++) {
    push(&s, inputString[i]);
  }

  while (!isEmpty(&s)) {
    printf("%c", pop(&s));
  }
  printf("\n");

  return 0;
}
