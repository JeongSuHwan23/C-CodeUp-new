#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node {
    element data;
    struct Node *next;
} Node;

void printList(Node *head) {
  Node *ptr = head->next;
  int cnt = 0;
  if (head == NULL) return;
  do {
    if (ptr == NULL) break;
    printf("%d->", ptr->data);
    ptr = ptr->next;
    cnt++;
  } while (ptr != head->next);
  //}while(cnt <10);
  printf("\n");
}

Node *insertFirst(Node *head, element data) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->data = data;
  if (head == NULL) {
    head = node;
    node->next = head;
  } else {
    node->next = head->next;
    head->next = node;
  }
  return head;
}

Node *insertLast(Node *head, element data) {
  Node *node = (Node *) malloc(sizeof(Node));
  node->data = data;
  if (head == NULL) {
    head = node;
    node->next = head;
  } else {
    node->next = head->next;
    head->next = node;
    head = node;
  }
  return head;
}

Node *chageCard(Node *head) {
  Node *removed = head->next; //1 삭제
  head->next = head->next->next; //2가 첫위치로 감
  free(removed);
  return head->next;
}

int main() {
  Node *head = NULL, *p;
  int n;
  printf("카드개수 입력\n");
  scanf("%d", &n);
//    printf("마지막위치에 연결\n");
  for (int i = 1; i <= n; i++) {
    head = insertLast(head, i);
  }
//    printf("head노드 = %d\n",head->data);
  while (head->next != head) {
    head = chageCard(head);
    printList(head);
  }
  printf("마지막 카드번호 : %d", head->data);
  return 0;
}