//zig zag traversal bst
#include <iostream>
#include <stack>
using namespace std;
struct Node
{
  int data;
  Node *left, *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void ZigZagTrav(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  stack<Node *> curLevel;
  stack<Node *> nextLevel;

  bool leftToRight = true;
  curLevel.push(root);
  while (!curLevel.empty())
  {
    Node *temp = curLevel.top();
    curLevel.pop();

    if (temp)
    {
      cout << temp->data << " ";
      if (leftToRight)
      {
        if (temp->left)
        {
          nextLevel.push(temp->left);
        }
        if (temp->right)
        {
          nextLevel.push(temp->right);
        }
      }
      else
      {
        if (temp->right)
        {
          nextLevel.push(temp->right);
        }
        if (temp->left)
        {
          nextLevel.push(temp->left);
        }
      }
    }
    if (curLevel.empty())
    {
      leftToRight = !leftToRight;
      swap(curLevel, nextLevel);
    }
  }
}

int main()
{
  Node *root = new Node(12);
  root->left = new Node(9);
  root->right = new Node(15);
  root->left->left = new Node(5);
  root->left->right = new Node(10);

  ZigZagTrav(root);
  cout << endl;
  return 0;
}