#include <stdio.h>

#define MAX_Q_SIZE 5
typedef int element;

typedef struct {
    int rear;
    int front;
    element data[MAX_Q_SIZE];
} Queue;

void initQueue(Queue *q) {
  q->front = q->rear = 0;
}

int isEmpty(Queue *q) {
  return (q->front == q->rear);
}

int isFull(Queue *q) {
  return ((q->rear + 1) % MAX_Q_SIZE == q->front);
}

void enQueue(Queue *q, element item) {
  if (isFull(q)) {
    printf("큐가 포화상태입니다.\n");
  } else {
    q->rear = (q->rear + 1) % MAX_Q_SIZE;
    q->data[q->rear] = item;
  }
}

element deQueue(Queue *q) {
  if (isEmpty(q)) {
    printf("큐는 공백상태입니다.\n");
    return -1; // Return an error value since the queue is empty
  } else {
    q->front = (q->front + 1) % MAX_Q_SIZE;
    int data = q->data[q->front];
    return data;
  }
}

void printQueue(Queue *q) {
  int i;
  printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
  if (isEmpty(q)) {
    printf("큐는 공백상태입니다.\n");
    return;
  }
  i = q->front;
  do {
    i = (i + 1) % MAX_Q_SIZE;
    printf("%d | ", q->data[i]);
    if (i == q->rear) break;
  } while (i != q->front);
  printf("\n");
}

int main() {
  Queue q;
  element item;
  initQueue(&q);
  printf("--데이터 추가 단계--\n");
  for (int i = 0; i < 4; i++) {  // Allow only 4 inputs
    printf("정수를 입력하시오: ");
    scanf("%d", &item);
    enQueue(&q, item);
    printQueue(&q);
  }
  printf("큐는 포화상태입니다.\n\n");
  printf("--데이터 삭제 단계--\n");
  while (!isEmpty(&q)) {
    item = deQueue(&q);
    if (item != -1) {
      printf("꺼내진 정수: %d\n", item);
      printQueue(&q);
    }
  }
  printf("큐는 공백상태입니다.\n\n");

  return 0;
}
