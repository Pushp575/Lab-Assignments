//Preorder,Inorder and Postorder
#include<iostream>
#include<queue>

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int val)
  {
    data = val;
    left = right = nullptr;
  }
};

void preorder(Node* root)//Pre-Order Traversal(Root,Left-node,Right-node)
{
  if(root == nullptr)
  return;
  cout<< root->data <<" ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(Node* root)//In-Order Traversal(Left-node,Root,Right-node)
{
  if(root == nullptr)
  return;
  inorder(root->left);
  cout<< root->data <<" ";
  inorder(root->right);
}

void postorder(Node* root)//Post-Order Traversal(Left-node,Right-node,Root)
{
  if(root == nullptr)
  return;
  postorder(root->left);
  postorder(root->right);
  cout<< root->data <<" ";
}

int main()
{
  Node* root = new Node(1);
  root->left= new Node(2);
  root->right= new Node(3);
  root->left->left= new Node(4);
  root->left->right= new Node(5);
  root->right->right= new Node(6);

  cout<<"Preorder Traversal: ";
  preorder(root);
  cout<<endl;

  cout<<"In-order Traversal: ";
  inorder(root);
  cout<<endl;

  cout<<"Post-order Traversal: ";
  postorder(root);
  cout<<endl;
}