#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct Queue {
    int rear;
    int front;
    element data[MAX_QUEUE_SIZE];
} Queue;

Queue *createQueue() {
  Queue *temp = malloc(sizeof(Queue));
  return temp;
}

void initQueue(Queue *q) {
  q->rear = q->front = -1;
}

bool isFull(Queue *q) {
  return q->rear == MAX_QUEUE_SIZE - 1;
}

bool isEmpty(Queue *q) {
  return q->rear == q->front;
}

void enQueue(Queue *q, element item) {
  if (isFull(q)) {
    printf("Queue is full");
    return;
  }
  q->data[++(q->rear)] = item;
}

element deQueue(Queue *q) {
  if (isEmpty(q)) {
    printf("empty");
    return -1;
  }
  return q->data[++(q->front)];
}

void printQueue(Queue *q) {
  for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
    if (i <= q->front || i > q->rear)
      printf("    |");
    else
      printf("%d  |", q->data[i]);
  }
  printf("\n");
}

int main() {
  Queue *q = createQueue();
  initQueue(q);

  enQueue(q, 10);
  printQueue(q);
  enQueue(q, 20);
  printQueue(q);
  enQueue(q, 30);
  printQueue(q);
  enQueue(q, 40);
  printQueue(q);
  deQueue(q);
  printQueue(q);
  deQueue(q);
  printQueue(q);

  return 0;
}