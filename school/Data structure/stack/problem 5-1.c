#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef int element; // int를 element로 재정의

// 스택 구조체 정의
typedef struct {
    int top;
    element data[MAX_STACK_SIZE];
} Stack;

Stack s; // 전역 변수로 스택 선언

void initStack() {
  s.top = -1;
}

bool isEmpty() {
  return s.top == -1;
}

bool isFull() {
  return s.top == MAX_STACK_SIZE - 1;
}

void push(element item) {
  if (isFull()) {
    printf("스택이 꽉 찼습니다.\n");
    return;
  }
  s.data[++s.top] = item;
}

element pop() {
  if (isEmpty()) {
    printf("스택이 비어있습니다.\n");
    return -1; // 스택이 비어있을 때는 임의의 값 반환
  }
  return s.data[s.top--];
}

element peek() {
  if (isEmpty()) {
    printf("스택이 비어있습니다.\n");
    return -1; // 스택이 비어있을 때는 임의의 값 반환
  }
  return s.data[s.top];
}

int main() {
  initStack(); // 스택 초기화

  push(1);
  push(2);
  push(3);
  printf("%d\n", pop()); // 3
  printf("%d\n", peek()); // 2
  printf("%d\n", pop()); // 2

  return 0;
}