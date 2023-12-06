#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
    element *data;
    int front;
    int rear;
    int size;
} Queue;

Queue *initQueue(int n);

int isFull(Queue *q);

void enQueue(Queue *q, element data);

int isEmpty(Queue *q);

element deQueue(Queue *q);

void destroyQueue(Queue *q);

void printAll(Queue *q);

int main() {
  Queue *q;
  element data;
  q = initQueue(5);
  enQueue(q, 10);
  printAll(q);
  enQueue(q, 20);
  printAll(q);
  enQueue(q, 30);
  printAll(q);
  enQueue(q, 40);
  printAll(q);
  enQueue(q, 50);
  printAll(q);
  data = deQueue(q);
  printAll(q);
  enQueue(q, 60);
  printAll(q);

  destroyQueue(q);
  return 0;
}

Queue *initQueue(int n) {
  Queue *temp = (Queue *) malloc(sizeof(Queue));
  temp->size = n;  // n을 크기로 하는 큐
  temp->rear = -1;
  temp->front = -1;
  temp->data = (element *) malloc(sizeof(element) * temp->size);   // 크기 n 을 가지는 동적 배열 생성
  return temp;
}

int isFull(Queue *q) {
  return q->rear == q->size - 1;
  // 큐가 가득 차 있다면 rear 은 어떤 상태일까?
}

void enQueue(Queue *q, element data) {
  if (isFull(q)) {  // 가득 차 있다면 "Queue is full"이라고 출력
    printf("Queue is full\n");
    return;
  }
  // 아니면 rear에 data 삽입
  q->data[++q->rear] = data;
}

int isEmpty(Queue *q) {
  // 큐가 비어 있다면 rear과 front 는 어떤 상태일까?
  if (q->front == q->rear)
    return 1;
  else
    return 0;
}

element deQueue(Queue *q) {
  // 비어 있다면 "Queue is empty" 출력하고 0 리턴
  if (q->front == q->rear) {
    printf("Queue is empty");
    return 0;
  }
    // 아니면 front위치의 데이터 리턴
  else {
    int item = q->data[++q->front];
    return item;
  }
}

void destroyQueue(Queue *q) {
  free(q);
}

void printAll(Queue *q) {
  // 0 부터 배열크기-1 에서  front+1 ~rear사이의 데이터만 출력
  int i;
  for (i = 0; i < q->size; i++) {
    if (i <= q->front || i > q->rear) {
      printf("%7c", '|');
    } else {
      // , , 사이에 입력
      printf("%4d%3c", q->data[i], '|');
    }
  }
  printf("\n");
}