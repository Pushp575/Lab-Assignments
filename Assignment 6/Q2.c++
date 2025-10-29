#include<iostream>

using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

void display(Node* head)
{
  if (head == NULL)
  {
    cout<<"List is empty";
    return;
  }

  Node* temp=head;

  do{
    cout << temp->data <<" ";
    temp= temp->next;
  }
  while
  (temp != head);
  
  cout<< head->data <<endl;
}
int main()
{
  Node* head= new Node(20);
  Node* second =new Node(100);
  Node* third= new Node(40);
  Node* fourth= new Node(80);
  Node* fifth= new Node(60);

  head->next = second;
  head->next = third;
  head->next = fourth;
  head->next = fifth;
  head->next = head;

  display(head);

  return 0;
}