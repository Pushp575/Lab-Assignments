//Programm for simple queues
#include<iostream>
using namespace std;
void push (int p,int a[],int &f,int &e,int size)
{
	if((f==-1)&&(e==-1))
	{
		f++;
		e++;
		a[e]=p;
		
	}
	else if(e==size-1)
	{
		cout<<"overflow";
		
		
	}
	else
	{		e++;
		a[e]=p;
		
	}
	
}
void deq(int a[],int &f,int &e,int size)
{
	if((f==-1)&&(e==-1))
	{
		cout<<"Underflow";
	}
	else 
	{
		
		f++;
	}
}
void isEmpty(int a[],int &f,int &e,int size)
{
	if(f<e)
	{
		cout<<"Empty";
	}
	else
	{
		cout<<"Numbe rof elements that can be added ="<<size-e-1;
	}
	
}
void isFull(int a[],int &f,int &e,int size)
{
	if(e==size-1)
	{
		cout<<"Overflow";
	}
	
}
int peek(int a[],int &f,int &e,int size)
{
return a[f];
	
}
void display(int a[],int &f,int &e,int size)
{
	cout<<"Ur queue is:"<<endl;
	for(int i=f;i<=e;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main ()
{
	cout<<"Enter the size of ur queue";
	int n;
	cin>>n;
	int q[n];
	int front=-1;
	int end=-1;

	while (front>=-1)
	{
		cout<<"Here's your menu for performing operations"<<endl;
		cout<<"Enter the number of operation u want to perform"<<endl;
		cout<<"1 Enqueu"<<endl;
		cout<<"2 Dequeu"<<endl;
		cout<<"3 check if Queue is full"<<endl;
		cout<<"4.check if Queueis empty"<<endl;
		cout<<"5.print the top most element"<<endl;
		cout<<"6.Display the elements"<<endl;
		cout<<"7.Exit the program"<<endl;
		int ch;
		cin>>ch;
		if(ch==1)
		{	int v;
		int s;
			
			cout<<"Enter the number of element to be added";
			cin>>v;
			for(int i=0;i<v;i++)
			{	
			cout<<"Enter the element to be added";
			cin>>s;
			
			push(s,q,front,end,n);
		}
		}
			if(ch==2)
		{
			int p;
			cout<<"Enter the number of element to be deleted";
			cin>>p;
			for(int i=0;i<p;i++)
			{
			deq(q,front,end,n);
		}
		}
		if(ch==3)
		{
			isFull(q,front,end,n);
		}
		if(ch==4)
		{
			isEmpty(q,front,end,n);
		}
		if(ch==5)
		{
			cout<<peek(q,front,end,n)<<endl;
		}
		if(ch==6)
		{
		display(q,front,end,n);
			
		}
		if(ch==7)
		{
			break;
		}
}
}