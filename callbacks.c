#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

Node* create_node(int data) {
  Node* p = (Node*)malloc(sizeof(Node));
  if (p != NULL) {
    p->data = data;
    p->next = NULL;
  }
  return p;
}

struct Node* add_front(Node* head, int  data) {
  Node* p = create_node(data);
  if (p == NULL) return head;
  p->next = head;
  return p;
}

void apply(Node* phead, void (*fp)(void*, void*), void* arg) {
  Node* p = phead;
  while (p != NULL) {
    fp(p, arg);
    p = p->next;
  }
}

void sum(void* p, void* arg) {
  Node* np = (Node*)p;
  int* total = (int*)arg;
  *total += np -> data;
}

int main() {
  int total = 0;
  Node* np2 = create_node(2);
  Node* np1 = add_front(np2, 1);

  printf("%i\n", total);

  apply(np1, &sum, &total);

  printf("%i\n", total);
}
