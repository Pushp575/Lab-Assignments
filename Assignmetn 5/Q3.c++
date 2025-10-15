//finding middle of linked list
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head=NULL;
    }
    void push_back(int val) {
        Node* newnode=new Node(val);
        if (head==NULL) {
            head=newnode;
        } 
		else 
		{
            Node* temp=head;
            while(temp->next!=NULL) 
			{
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }

    void printMiddle() 
	{
        if (head==NULL) {
            cout<<"emptyy";
         }

        Node* slow=head;
        Node* fast=head;
        // concept jo use krr e ki slow by 1 chlega fast by 2 so at the end when fast reaches end of list slow is in middle

        while (fast!=NULL && fast->next!=NULL) {
            slow=slow->next; // slow ko by 1 move kra re
            fast=fast->next->next;  //fast ko by 2
        }
        cout << "Middle element is " << slow->data << endl;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data<<" -> ";
            temp=temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);

    list.display();
    list.printMiddle();

    return 0;
}