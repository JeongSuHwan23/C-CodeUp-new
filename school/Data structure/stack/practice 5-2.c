#include <stdio.h>

#define MAX 300
typedef int element;
typedef struct {
    element data[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
  s->top = -1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

int isFull(Stack *s) {
  return s->top == MAX - 1;
}

void push(Stack *s, element c) {
  if (isFull(s))
    printf("Full");
  else
    s->data[++s->top] = c;
}

element pop(Stack *s) {
  if (isEmpty(s)) {
    printf("EMPTY");
    return 0;
  } else {
    return s->data[s->top--];
  }
}

int main() {
  int n, m;
  char expr[MAX];
  Stack s;

  initStack(&s);

  gets(expr);

  for (int i = 0; expr[i] != '\0'; i += 2) {
    if (expr[i] >= '0' && expr[i] <= '9')
      push(&s, expr[i] - '0');  // Convert character to integer
    else {
      switch (expr[i]) {
        case '+':
          n = pop(&s);
          m = pop(&s);
          push(&s, n + m);
          break;
        case '-':
          n = pop(&s);
          m = pop(&s);
          push(&s, m - n);
          break;
        case '*':
          n = pop(&s);
          m = pop(&s);
          push(&s, n * m);
          break;
        case '/':
          n = pop(&s);
          m = pop(&s);
          if (n != 0)
            push(&s, m / n);
          else
            printf("Division by zero");
          break;
      }
    }
  }

  printf("%d", pop(&s));

  return 0;
}
