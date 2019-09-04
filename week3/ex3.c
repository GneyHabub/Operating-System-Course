#include <stdlib.h>
#include <stdio.h>

struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};

void print_list(struct Node* n){
  while(n != NULL){
    printf("%d\n", n->data);
    n = n->next;
  }
}

struct Node* insert(struct Node* n, int dataToIns){
  if (n != NULL) {
    struct Node* new = (struct Node*)(malloc(sizeof(struct Node)));
    new->data = dataToIns;
    new->next = n->next;
    new->prev = n;
    n->next = new;
    return new;
  }
}

int delete(struct Node* n){
  if (n != 0) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    int ret = n->data;
    return ret;
  }
  return 0;
}

int main(){
  struct Node head;
  struct Node node1;
  head.data = 1;
  head.next = &node1;
  head.prev = NULL;
  node1.data = 2;
  node1.next = NULL;
  node1.prev = &head;

  struct Node node2;
  node2 = *insert(&node1, 3);

  struct Node node3;
  node3 = *insert(&node2, 4);

  struct Node node4;
  node4 = *insert(&node3, 5);

  print_list(&node3);

  return 0;
}
