#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node {
    element data;
    struct Node *next;
} Node;
typedef struct {
    Node *top;
} SList;

void init(SList *s) {
  s->top = NULL;
}

int isEmpty(SList *s) {
  return s->top == NULL;
}

int isFull(SList *s) {
  return 0;
}

void push(SList *s, element data) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->data = data;
  node->next = s->top;
  s->top = node;
  //printf("top =%p %d\n",top,top->data);
  //
}

void pop(SList *s) {
  element data;
  Node *temp;
  if (isEmpty(s->top)) {
    printf("Stack is Empty\n");
    return NULL;
  } else {
    temp = s->top;
    s->top = s->top->next;
    data = temp->data;
    free(temp);

  }
}

void printList(SList *s) {
  Node *p = s->top;

  while (p != NULL) {

    printf("%d->", p->data);
    p = p->next;
    //if(p->next == NULL) break;
  }
  printf("NULL\n");
}

int main() {
  SList s;
  init(&s);
  push(&s, 1);
  printList(&s);
  push(&s, 2);
  printList(&s);
  push(&s, 3);
  printList(&s);
  pop(&s);
  printList(&s);
  pop(&s);
  printList(&s);
  pop(&s);
  printList(&s);
  return 0;
}