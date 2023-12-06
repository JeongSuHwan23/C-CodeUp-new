#include <stdio.h>
#include <stdlib.h>

#define MAX_Q_SIZE 5
typedef int element;
//Queue 구조체 정의
typedef struct {
    int front;
    int rear;
    element data[MAX_Q_SIZE];
} Queue;

void error(char *message) {
  printf("%s\n", message);
  exit(0);//메인함수 종료
}

void initQueue(Queue *q) {
  q->front = q->rear = -1;
}

int isFull(Queue *q) {
  return q->rear == MAX_Q_SIZE - 1;
}

int isEmpty(Queue *q) {
  return q->front == q->rear;
}

void enQueue(Queue *q, element item) {
  if (isFull(q)) {
    printf("queue is full.\n");
    return;
  }
  q->data[++q->rear] = item;
}

element deQueue(Queue *q) {
  if (isEmpty(q)) {
    printf("queue is empty.\n");
    return;
  }
  int item = q->data[++q->front];
  return item;
}

void queuePrint(Queue *q) {
  int i;
  for (i = 0; i < MAX_Q_SIZE; i++) {
    if (i <= q->front || i > q->rear) {
      printf("%7c", '|');
    } else {
      printf("%4d%3c", q->data[i], '|');
    }
  }
  printf("\n");
}

int main() {
  element item = 0;
  Queue q;
  initQueue(&q);
  printf("\n");
  enQueue(&q, 10);
  queuePrint(&q);
  enQueue(&q, 20);
  queuePrint(&q);
  enQueue(&q, 30);
  queuePrint(&q);
  item = deQueue(&q);
  queuePrint(&q);
  item = deQueue(&q);
  queuePrint(&q);
  return 0;
}