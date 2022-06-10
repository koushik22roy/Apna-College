//largest Binary Search Tree in BST
#include <iostream>
#include <climits>
using namespace std;

struct Node
{
  int data;
  Node *left, *right;
  Node(int value)
  {
    data = value;
    left = NULL;
    right = NULL;
  }
};

struct Info
{
  int size;
  int max;
  int min;
  int ans;
  bool isBST;
};

Info largstBinary(Node *root)
{
  if (root == NULL)
  {
    return {0, INT_MIN, INT_MAX, 0, true};
  }
  else if (root->left == NULL && root->right == NULL)
  {
    return {1, root->data, root->data, 1, true};
  }

  Info leftInfo = largstBinary(root->left);
  Info rightInfo = largstBinary(root->right);

  Info curr;
  curr.size = (1 + leftInfo.size + rightInfo.size);

  if (leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data)
  {
    curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
    curr.max = max(rightInfo.max, max(leftInfo.max, root->data));

    curr.ans = curr.size;
    curr.isBST = true;
    return curr;
  }

  curr.ans = max(leftInfo.ans, rightInfo.ans);
  curr.isBST = false;
  return curr;
}

int main()
{
  Node *root = new Node(15);
  root->left = new Node(20);
  root->right = new Node(20);
  root->left->left = new Node(5);
  cout << "Largst BST in BT" << largstBinary(root).ans << endl;
  return 0;
}
