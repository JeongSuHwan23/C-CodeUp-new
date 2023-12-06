#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node {
    element data;
    struct Node *next;
} Node;

// 노드를 맨 앞에 삽입하는 함수
Node *insertFirst(Node *head, element value) {
  Node *p = (Node *) malloc(sizeof(Node));
  p->next = head;
  p->data = value;
  return p;
}

// pre 노드 뒤에 새로운 노드를 삽입하는 함수
Node *insert(Node *pre, element value) {
  Node *p = (Node *) malloc(sizeof(Node));
  p->data = value;
  p->next = pre->next;
  pre->next = p;
}

// 맨 앞 노드를 삭제하는 함수
Node *deleteFirst(Node *head) {
  if (head == NULL) return NULL;
  Node *removed = head;
  Node *newHead = head->next;
  free(removed);
  return newHead;
}

// pre 노드 다음의 노드를 삭제하는 함수
Node *delete(Node *head, Node *pre) {
  Node *removed = pre->next;
  pre->next = removed->next;
  free(removed);
}

// 연결 리스트를 출력하는 함수
void printList(Node *head) {
  while (head != NULL) {
    printf("%d->", head->data);
    head = head->next;
  }
  printf("NULL");
}

// 연결 리스트의 모든 노드의 데이터 합을 반환하는 함수
int getSum(Node *head) {
  int sum = 0;
  Node *p = head;
  while (p != NULL) {
    sum += p->data;
    p = p->next;
  }
  return sum;
}

int main(void) {
  Node *head = NULL;
  int count, data;

  printf("노드의 개수: \n");
  scanf("%d", &count);
  for (int i = 1; i <= count; i++) {
    printf("노드 #%d 데이터: \n", i);
    scanf("%d", &data);
    head = insertFirst(head, data);
  }
  printf("연결 리스트 데이터의 합 : %d", getSum(head));
  return 0;
}
