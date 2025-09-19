#include <stdio.h>

struct Node
{
  int data;
  struct Node *nextNode;
};

void traverse(struct Node *head) {
  printf("%d\n", head->data);
  if (head->nextNode == NULL) { return; }
  traverse(head->nextNode);
}

void append(struct Node *head, struct Node* node) {
  if (head->nextNode == NULL) {
    head->nextNode = node;
    node->nextNode = NULL;
    return;
  }
  append(head->nextNode, node);
}


int main()
{
  
  struct Node head = { 1, NULL };
  struct Node secondNode = { 2, NULL };
  struct Node tail = { 3, NULL };
  
  head.nextNode = &secondNode;
  secondNode.nextNode = &tail;
  tail.nextNode = NULL;

  struct Node *list = &head;

  // Inserting at tail here.
  struct Node newTail = { 4, NULL };
  append(list, &newTail);



  traverse(list);

  return 0;
}