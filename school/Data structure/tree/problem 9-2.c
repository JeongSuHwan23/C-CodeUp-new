#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TNode{
    char data;
    struct TNode *left, *right;
//
    //
}TNode;
/*     -
     /   \
    *     /
   / \   / \ 
  A   B  C  D     */
TNode* makeRootNode(char data, TNode* leftNode, TNode* rightNode)
{
  TNode* root = (TNode*)malloc(sizeof(TNode));//노드 동적할당
  root->data = data;
  root->left = leftNode;
  root->right = rightNode;
  //

  return root;
}

void preorder(TNode* root)
{
  if(root == NULL) return;
  printf("%c", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(TNode* root)
{
  if(root == NULL) return;
  inorder(root->left);
  printf("%c", root->data);
  inorder(root->right);
}

void postorder(TNode* root)
{
  if(root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%c", root->data);
}

void main()
{
  TNode* n7 = makeRootNode('D', NULL, NULL);
  TNode* n6 = makeRootNode('C', NULL, NULL);
  TNode* n5 = makeRootNode('B', NULL, NULL);
  TNode* n4 = makeRootNode('A', NULL, NULL);
  TNode* n3 = makeRootNode('/',n6, n7);
  TNode* n2 = makeRootNode('*', n4, n5);
  TNode* n1 = makeRootNode('-', n2, n3);

  printf("\n preorder  : ");
  preorder(n1);

  printf("\n inorder   : ");
  inorder(n1);

  printf("\n postorder : ");
  postorder(n1);

  free(n1);free(n2);free(n3);
  free(n4);free(n5);free(n6);
  free(n7);

}