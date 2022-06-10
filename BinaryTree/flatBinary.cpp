//flatten binary 

#include "bits/stdc++.h"
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

void flatten(Node* root){
  if(root->left != NULL){
    flatten(root->left);
    Node* temp =root->right;
    root->right = root->left;
    root->left = NULL;

    Node* t = root->right;
    while (t->right!=NULL)
    {
      t = t->right;
    }
    t->right = temp;
    
  }
  flatten(root->right); 
}
void inorder(struct Node* root){
  if(root == NULL){return;}
  inorder(root->left);
  cout<<root->data;
  inorder(root->right); 
}
int main(){
  Node *root = new Node(2);
  root->left = new Node(3);
  root->right = new Node(1);
  flatten(root);
  inorder(root);
  cout<<endl;
  return 0;
}