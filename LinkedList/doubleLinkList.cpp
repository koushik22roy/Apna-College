#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *prev;
  node *next;
  node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

//insert at head
void insertAtHead(node *&head, int val)
{

  node *n = new node(val);
  n->next = head;
  if (head != NULL)
  {
    head->prev = n;
  }
  head = n;   
}

//insert element
void insertElementAtTail(node *&head, int val)
{
  if (head == NULL)
  {
    insertElementAtTail(head, val);
    return;
  }

  node *n = new node(val);
  node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->prev = temp;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  node *head = NULL;
  insertElementAtTail(head, 1);
  insertElementAtTail(head, 2);
  insertElementAtTail(head, 3);
  insertElementAtTail(head, 4);
  insertElementAtTail(head, 5); 
  display(head);
  // insertAtHead(head, 5);
  // display(head);   
  return 0;
}