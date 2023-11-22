#include <stdio.h>//201p(단어입력) + 203(탐색)
#include <stdlib.h>
#include<string.h>
typedef struct Node{
    char data[100];
    struct Node* next;
}Node;

Node* insertFirst(Node* head, char* data){
  Node *p = (Node*)malloc(sizeof(Node));
  p->next = head;
  strcpy(p->data, data);
  return p;

}
void insert(Node* pre, char* data){
  Node *p = (Node*)malloc(sizeof(Node));
  strcpy(p->data, data);
  p->next = pre->next;
  pre->next = p;

}
Node* deleteFirst(Node* head){
  if (head == NULL) return NULL;
  Node* removed = head;//1) removed 노드에 헤드포인터의 주소를 저장
  Node* newhead = head->next;//2) 헤드포인터를  헤드포인터->next 로 변경 저장
  free(removed);//3) removed의 주소 반환
  return newhead;//4) 변경된 헤드포인터 반환

}
Node* delete(Node* head, Node* pre){
  //프리가 가리키는 다음 노드를 삭제
  Node* removed = pre->next;//
  pre->next = removed->next;// pre->next->next와 같은 주소
  free(removed);

}
void printList(Node* head){

  while(head!=NULL){
    printf("%s->", head->data);
    head = head->next;
  }
  printf("NULL\n");

}
int main(){
  Node* head = NULL;
  Node* p;
  char str[3][10] ={"melon","kiwi","apple"};
  char find[10];
  //코드 작성
  head= insertFirst(head,str[0]); //melon 입력
  printList(head);
  head= insertFirst(head,str[1]); //melon 입력
  printList(head);
  head= insertFirst(head,str[2]); //melon 입력
  printList(head);
  printf("찾을 데이터를 입력하세요\n");
  scanf("%s",find);
  for(p=head;p!=NULL;p=p->next){
    //printf("%s",p->data);
    if   (strcmp(p->data,find) == 0) printf("%s을 찾았습니다.",find);

  }
  return 0;
}
