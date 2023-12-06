#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node *left, *right;
} TNode;

TNode *NewNode(char data) {
  TNode *node = (TNode *) malloc(sizeof(TNode));
  node->data = data;
  node->left = node->right = NULL;
  return node;
}

TNode *search_Node(TNode *root, char data) {
  if (root == NULL || root->data == data)
    return root;

  TNode *temp = search_Node(root->left, data);
  if (temp != NULL)
    return temp;

  return search_Node(root->right, data);
}

void insert_Node(TNode *root, char data, char left, char right) {
  if (root != NULL) {
    if (root->data == data) {
      if (left != '.')
        root->left = NewNode(left);
      if (right != '.')
        root->right = NewNode(right);
    } else {
      insert_Node(root->left, data, left, right);
      insert_Node(root->right, data, left, right);
    }
  }
}

void preorder(TNode *root) {
  if (root) {
    printf("%c", root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder(TNode *root) {
  if (root) {
    inorder(root->left);
    printf("%c", root->data);
    inorder(root->right);
  }
}

void postorder(TNode *root) {
  if (root) {
    postorder(root->left);
    postorder(root->right);
    printf("%c", root->data);
  }
}

int main() {
  TNode *root = NewNode('A'); // Assuming 'A' is the root
  TNode *tmp;
  int n;
  char data, left, right;

  scanf("%d", &n);
  getchar();

  for (int i = 0; i < n; i++) {
    scanf("%c %c %c", &data, &left, &right);
    getchar();

    tmp = search_Node(root, data);
    if (tmp != NULL)
      insert_Node(tmp, data, left, right);
    else
      insert_Node(root, data, left, right);
  }

  preorder(root);
  printf("\n");
  inorder(root);
  printf("\n");
  postorder(root);
}