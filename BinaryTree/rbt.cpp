#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
  Node(int value)
  {
    data = value;
    left = NULL;
    right = NULL;
  }
};

// void RightView(Node  *root)
// {
//   if (root == NULL)
//   {
//     return;
//   }

//   queue<Node*> q;
//   q.push(root);

//   while (!q.empty())
//   {
//     int n = q.size();
//     for (int i = 0; i < n; i++)
//     {
//       Node *curr = q.front();
//       q.pop();

//       if (i == n - 1)
//       {
//         cout << curr->data << "";
//       }
//       if (curr->left != NULL){
//         q.push(curr->left);
//       }
//       if(curr->right != NULL){
//         q.push(curr->right);
//       }
//     }
//   }
// }

//shortest distance between 2 nodes

Node *LCA(Node *root, int n1, int n2)
{
  if (root == NULL)
  {
    return NULL;
  }
  if (root->data == n1 || root->data == n2)
  {
    return root;
  }

  Node *left = LCA(root->left, n1, n2);
  Node *right = LCA(root->right, n1, n2);

  if (left != NULL && right->NULL)
  {
    return root;
  }
  if (left == NULL && right == NUll)
  {
    return NULL;
  }
  if (left == NULL && right == NULL)
  {
    return NULL;
  }
  if (left != NULL)
  {
    return LCA(root->left, n1, n2);
  }
  else
  {
    return LCA(root->right, n1, n2);
  }
}

int findDis(Node *root, int k, int dist)
{
  if (root = NULL)
    return -1

        if (root->data == k)
    {
      return dist;
    }

  int lef = fintDis(root->left, k, dist + 1) if (left != -1)
  {
    return left;
  }
  return findDis(root > right, k, dis + 1; )
}

int disBtwNodes(Node *root, int n1, int n2)
{
  Node *lca = LCA(root, n1, n2);

  int d1 = findDis(lca, n1, 0);
  int d2 = findDis(lca, n2, 0);

  return d1 + d2;
}

int main()
{
  struct Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  // RightView(root);

  return 0;
}