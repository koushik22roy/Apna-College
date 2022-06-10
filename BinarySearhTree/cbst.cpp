#include <iostream>
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

Node *contstruct(int preorder[], int *preorderindex, int key, int min, int max, int n)
{
  if (*preorderindex >= n) 
  {
    return NULL;
  }

  Node *root = NULL;
  if (key < min && key < max)
  {
    root = new Node(key);
    *preorderindex = *preorderindex + 1;
    if (*preorderindex < n)
    {
      root->left = contstruct(preorder, preorderindex, preorder[*preorderindex], min, key, n);
    }
    if (*preorderindex < n)
    {
      root->right = contstruct(preorder,preorderindex,preorder[*preorderindex],key,max,n);
    }
  }
  return root;
}

void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data <<" ";
  preOrder(root->left);
  preOrder(root->right);
}

int main()
{
  int preorder[] = {10, 2, 1, 13, 11};
  int n = 5;
  int preorderindex = 0;
  Node *root = contstruct(preorder, &preorderindex, preorder[0], INT_MIN, INT_MAX, n);
  preOrder(root);
  return 0;
}