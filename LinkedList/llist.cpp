#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int value)
  {
    data = value;
    next = NULL;
  }
};

void insertAtHead(node *&head, int value)
{
  node *n = new node(value);
  n->next = head;
  head = n;
}

void insertAtTail(node *&head, int value)
{
  node *n = new node(value);
  if (head == NULL)
  {
    head = n;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";
}

void deleteAtHead(node *&head)
{
  node *todelete = head;
  head = head->next;

  delete todelete;
}

void deletion(node *&head, int value)
{
  if (head = NULL)
  {
    return;
  }

  if (head->next == NULL)
  {
    deleteAtHead(head);
    return;
  }

  node *temp = head;
  while (temp->next->data != value)
  {
    temp = temp->next;
  }

  node *todelete = temp->next;
  temp->next = temp->next->next;

  delete todelete;
}
//simple reverse
node *reverse(node *&head)
{
  node *prevptr = NULL;
  node *currptr = head;
  node *nextptr;
  while (currptr != NULL)
  {
    nextptr = currptr->next;
    currptr->next = prevptr;
    prevptr = currptr;
    currptr = nextptr;
  }
  return prevptr;
}

//simple reverse using recursive mthod
node *reverseRecursive(node *&head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  node *newnode = reverseRecursive(head->next);
  head->next->next = head;
  head->next = NULL;

  return newnode;
}

//reverse oflist given k
node *reversek(node *&head, int k)
{
  node *preptr = NULL;
  node *currptr = head;
  node *nextptr;

  int count = 0;
  while (currptr != NULL && count < k)
  {
    nextptr = currptr->next;
    currptr->next = preptr;
    preptr = currptr;
    currptr = nextptr;

    count++;
  }
  if (nextptr != NULL)
  {
    head->next = reversek (nextptr, k);
  }
  return preptr;
}

int main()
{
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtHead(head, 8);
  insertAtTail(head, 6);
  display(head);

  // node *newhead = reverseRecursive(head);
  // display(newhead);

  int k = 2;
  node *newhead = reversek(head, k);
  display(newhead);
}