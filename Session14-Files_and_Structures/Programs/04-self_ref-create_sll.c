#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *push(struct Node *head, int data) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

  temp->data = data;
  temp->next = head;

  return temp;
}
int main() {
  int i, n;
  int values[] = {100, 200, 300, 400, 500};
  n = sizeof(values) / sizeof(values[0]);

  struct Node *head = NULL;
  for (i = n - 1; i >= 0; i--) {
    head = push(head, values[i]);
  }

  struct Node *ptr = head;
  while (ptr) {
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
  }

  printf("\b\b\b  \n");
  return 0;
}
