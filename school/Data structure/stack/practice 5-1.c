#include <stdio.h>
#include <string.h>

#define MAX 100
typedef char element;

typedef struct Stack {
    element str[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
  s->top = -1;
}

int isFull(Stack *s) {
  return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

void push(Stack *s, char c) {
  if (isFull(s)) {
    printf("FULL");
  } else {
    s->str[++s->top] = c;
  }
}

char pop(Stack *s) {
  if (isEmpty(s)) {
    printf("EMPTY");
    return 0;
  } else {
    char temp = s->str[s->top--];
    return temp;
  }
}

int palindrome(char String[]) {
  Stack S;
  int i;
  int length = strlen(String);

  initStack(&S);

  for (i = 0; i < length / 2; i++) {
    push(&S, String[i]);
  }

  for (i = length / 2 + (length % 2); i < length; i++) {
    char c = pop(&S);
    if (c != String[i]) {
      return 0;
    }
  }

  return 1;
}

int main(void) {
  char str[MAX];
  scanf("%s", str);

  if (palindrome(str)) {
    printf("TRUE");
  } else {
    printf("FALSE");
  }
  return 0;
}
