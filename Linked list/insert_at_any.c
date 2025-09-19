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
  struct Node tail = { 4, NULL };
  
  head.nextNode = &secondNode;
  secondNode.nextNode = &thirdNode;
  thirdNode.nextNode = &tail;
  tail.nextNode = NULL;

  struct Node *list = &head;

  // Inserting after second node here.
  struct Node newNode = { 9, NULL };
  newNode.nextNode = &thirdNode;
  secondNode.nextNode = &newNode;

  traverse(list);

  return 0;
}