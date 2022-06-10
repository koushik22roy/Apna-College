//Identitcal BST
#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *left, *right;
  Node(int vale){
    left = NULL;right = NULL;
  }
};

bool IsIdentical(Node *root1, Node *root2){
  if(root1 == NULL && root2 == NULL){
    return true;
  }
  else if(root1 == NULL || root2 == NULL){
    return false;
  }
  else{
    bool cond1 = root1->data == root2->data;
    bool cond2 = IsIdentical(root1->left,root2->left);
    bool cond3 = IsIdentical(root1->right, root2->right);

    if(cond1 && cond2 && cond3){
      return true;
    }else{
      return false;
    }
  }
}

int main(){
  Node* root = new Node(2);
  root->left = new Node(1);
  root->right = new Node(3);
  Node* root2 = new Node(6);
  root2->left = new Node(1);
  root2->right = new Node(10);
  
  if(IsIdentical(root,root2)){
    cout<<"BST identical";
  }else{
    cout<<"Not Identical";
  }
  return 0;
}