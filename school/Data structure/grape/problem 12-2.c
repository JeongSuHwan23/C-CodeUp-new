#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 30

typedef struct graphNode {
    int vertex;
    struct graphNode *link;
} graphNode;

typedef struct graphType {
    int n;
    graphNode *adjList[MAX_VERTEX];
} graphType;

void createGraph(graphType *g) {
  int v;
  g->n = 0;
  for (v = 0; v < MAX_VERTEX; v++) {
    g->adjList[v] = NULL;
  }
}

void insertVertex(graphType *g, int v) {
  if (((g->n) + 1) > MAX_VERTEX) {
    printf("그래프 정점의 개수를 초과하였습니다!");
    return;
  }
  g->n++;
}

void insertEdge(graphType *g, int u, int v) {
  graphNode *node;
  graphNode *prev = NULL;
  graphNode *cur = g->adjList[u];
  if (u >= g->n || v >= g->n) {
    printf("그래프에 없는 정점입니다!");
    return;
  }
  node = (graphNode *) malloc(sizeof(graphNode));
  node->vertex = v;
  while (cur != NULL && cur->vertex < v) {
    prev = cur;
    cur = cur->link;
  }
  if (prev != NULL) {
    node->link = prev->link;
    prev->link = node;
  } else {
    node->link = g->adjList[u];
    g->adjList[u] = node;
  }
}

void print_adjList(graphType *g) {
  int i;
  graphNode *p;
  for (i = 0; i < g->n; i++) {
    printf("정점 %C의 인접리스트", i + 65);
    p = g->adjList[i];
    while (p != NULL) {
      printf(" -> %c", p->vertex + 65);
      p = p->link;
    }
    printf("\n");
  }
}

int main() {
  int i;
  graphType *G;
  G = (graphType *) malloc(sizeof(graphType));

  createGraph(G);
  for (i = 0; i < 4; i++)
    insertVertex(G, i);
  insertEdge(G, 0, 1);
  insertEdge(G, 1, 0);
  insertEdge(G, 1, 2);
  insertEdge(G, 1, 3);
  insertEdge(G, 2, 1);
  insertEdge(G, 2, 3);
  insertEdge(G, 3, 1);
  insertEdge(G, 3, 2);

  printf("<G의 인접 리스트>\n");
  print_adjList(G);

  return 0;
}
