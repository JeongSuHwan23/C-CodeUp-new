#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node {
    element data;
    struct Node *next;
} Node;

Node *insertFirst(Node *head, element data) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->data = data;
  node->next = head;
  return node;
}

void insert(Node *head, Node *pre, element data) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->next = pre->next;
  pre->next = node;
  node->data = data;
  //return head;
}

Node *deleteFirst(Node *head) {
  if (head == NULL) return NULL;
  Node *removed = head;
  Node *newhead = head->next;
  free(removed);
  return newhead;
}

void delete(Node *head, Node *pre) {
  //프리가 가리키는 다음 노드를 삭제
  Node *removed = pre->next;
  pre->next = removed->next;
  //pre->next= pre->next->next;
  free(removed);
  //return head;
}

void printList(Node *head) {

  while (head != NULL) {
    printf("%d->", head->data);
    head = head->next;
  }
  printf("NULL\n");

}

int main() {
  Node *head = NULL;
  Node *temp = NULL;
  printf("[첫 위치 삽입]\n");
  for (int i = 0; i < 5; i++) {
    head = insertFirst(head, i);
    printList(head);
    if (i == 2) temp = head;

  }
  printf("[중간위치 삽입]\n");
  insert(head, temp, 100);
  printList(head);
  printf("[중간위치 삭제]\n");
  delete(head, temp);
  printList(head);
  printf("[첫 위치 삭제]\n");
  for (int i = 0; i < 5; i++) {
    head = deleteFirst(head);
    printList(head);
  }
  return 0;
}