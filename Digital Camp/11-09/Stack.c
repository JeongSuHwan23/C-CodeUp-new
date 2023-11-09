#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100

typedef int element;

typedef struct {
  element data[STACK_SIZE];
  element top;
}Stack;

Stack s;

void initStack(){
  s.top = -1;
}

bool isEmpty(){
  return s.top == -1;
}

bool isFull(){
  return s.top == STACK_SIZE-1;
}

void push(element item){
  if (isFull())
    printf("Full");
  else{
    s.top++;
    s.data[s.top] = item;
  }
}

void pop(){ //??? ??
  if (isEmpty())
    printf("Empty");
  else{
    printf("%d\n", s.data[s.top]);
    s.top--;
  }

}

void peek(){//???
  if (isEmpty())
    printf("Empty");
  else{
    printf("%d\n", s.data[s.top]);
  }
}

int main(){
  initStack();
  push(1);
  push(2);
  push(3);
  peek();
  pop();
  pop();
  peek();
  return 0;

}