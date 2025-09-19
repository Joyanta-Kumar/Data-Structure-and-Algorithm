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


int main()
{
  
  struct Node head = { 1, NULL };
  struct Node secondNode = { 2, NULL };
  struct Node thirdNode = { 3, NULL };
  
  head.nextNode = &secondNode;
  secondNode.nextNode = &thirdNode;
  thirdNode.nextNode = NULL;

  struct Node *list = &head;

  // Inserting at head here.
  struct Node newHead = { 0, NULL };
  newHead.nextNode = &head;
  list = &newHead;


  traverse(list);

  return 0;
}