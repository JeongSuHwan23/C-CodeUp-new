#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create(int N) {
  Node *head = NULL;
  Node *current = NULL;

  for (int i = 1; i <= N; ++i) {
    Node *newNode = (Node *) malloc(sizeof(Node));

    newNode->data = i;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
      current = head;
    } else {
      current->next = newNode;
      current = newNode;
    }
  }

  current->next = head;

  return head;
}

void josephusPermutation(Node **head, int N, int K) {
  Node *current = *head;
  Node *prev = NULL;

  printf("<");

  while (N > 0) {
    for (int i = 1; i < K; ++i) {
      prev = current;
      current = current->next;
    }

    printf("%d", current->data);

    if (prev == NULL) {
      *head = current->next;
    } else {
      prev->next = current->next;
    }

    Node *temp = current;
    current = current->next;
    free(temp);

    N--;

    if (N > 0) {
      printf(", ");
    }
  }

  printf(">\n");
}

int main() {
  int N, K;
  scanf("%d %d", &N, &K);
  Node *head = create(N);
  josephusPermutation(&head, N, K);
  return 0;
}