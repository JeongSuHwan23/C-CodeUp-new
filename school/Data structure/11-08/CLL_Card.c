#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node {
    element data;
    struct Node *next;
} Node;

void printList(Node* head){
    Node *p = head; //리스트의 첫위치 저장
    if (head == NULL) return;
    do {
        printf("%d->", p->data); //데이터
        p = p->next; //다음 노드값 저장
    } while(p != head); //p의 값이 첫위치가 아니면
    printf("\n");
}

void insertFirst(Node** head, element data){
    Node* node = (Node*)malloc(sizeof(Node)); //새노드 동적할당
    node->data = data;
    if (*head == NULL){ //리스트에 노드가 없는경우
        *head = node;  //새로운 노드주소값
        node->next = node; //자신을 순환참조
    }
    else{
        node->next = *head; //원래 리스트의 첫위치값
        *head = node; //새로운 노드 주소값
    }
}

Node* insertLast(Node* head, element data){
    Node* node = (Node*)malloc(sizeof(Node)); //새노드 동적할당
    node->data = data;
    if (head == NULL){
        head = node;  //새로운 노드주소값
        node->next = node; //자신을 순환참조
    }
    else{
        node->next = head; //리스트의 첫 위치
        Node* temp = head;
        while(temp->next != head) temp = temp->next;
        temp->next = node; //새노드 주소
    }
    return node; //새로운 head 주소 리턴
}

Node* changeCard(Node* head){
    Node* removed = head->next; //노드삭제위치 저장
    head->next = removed->next; //삭제된 다음 위치와 연결
    free(removed);
    return head; // 새로운 헤드값으로 리턴
}


int main() {
    Node *head =NULL;
    int n;
    printf("카드개수 입력\n");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        if(i == 1) insertFirst(&head, i); //노드 삽입함수 호출
        else head = insertLast(head, i); //노드 삽입함수 호출
    }
    Node* temp = head;
    while(temp->next != temp){ //head의 다음 노드가 자신이 아니라면
        printList(head);
        head = changeCard(head); //카드 제거함수 호출
        head = head->next;
    }
    printList(head);
    printf("마지막 카드번호 : %d",head->data);
    free(head);
    return 0;

}
