#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct Node {
    element data;
    struct Node *next;
} Node;

Node *createNode(element data);

void printAll(Node *ptr);

int main() {
  Node *head, *node1, *node2;
  head = createNode(12);
  node1 = createNode(99);
  node2 = createNode(37);
  head->next = node1;
  node1->next = node2;
  printAll(head);
}

Node *createNode(element data) {
  Node *new = malloc(sizeof(Node));
  new->data = data;
  new->next = NULL;
  return new;
}

void printAll(Node *ptr) {
  while (ptr) {
    if (ptr->next) {
      printf("%d->", ptr->data);
      ptr = ptr->next;
    } else {
      printf("%d", ptr->data);
      return;
    }
  }
}