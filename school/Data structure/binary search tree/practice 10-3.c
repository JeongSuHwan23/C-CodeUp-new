#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
} Node;

Node *newNode(int item) {
  Node *temp = (Node *) malloc(sizeof(Node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

Node *insert(Node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else if (key > node->key)
    node->right = insert(node->right, key);
  return node;
}

void postorder(Node *node) {
  if (node != NULL) {
    postorder(node->left);
    postorder(node->right);
    printf("%d\n", node->key);
  }
}

int main() {
  Node *root = NULL;
  int key;
  while (scanf("%d", &key) != EOF) {
    if (root == NULL) {
      root = insert(root, key);
    } else {
      insert(root, key);
    }
  }
  postorder(root);
  return 0;
}
