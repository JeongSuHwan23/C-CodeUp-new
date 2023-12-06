#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void printList(Node *head) {
  Node *p = head;
  while (p != NULL) {
    printf("%d", p->data);
    if (p->next != NULL) {
      printf("->");
    }
    p = p->next;
  }
  printf("\n");
}

Node *reverse(Node *head) {
  Node *prev = NULL;
  Node *current = head;
  Node *next = NULL;

  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  return prev; // new head of the reversed list
}

Node *insertFirst(Node *head, int data) {
  Node *newNode = (Node *) malloc(sizeof(Node));

  newNode->data = data;
  newNode->next = head;
  head = newNode;

  return head;
}

int main() {
  Node *head = NULL;

  for (int i = 10; i <= 50; i += 10) {
    head = insertFirst(head, i);
    printList(head);
  }

  printf("역순으로 출력\n");
  head = reverse(head);
  printList(head);

  return 0;
}