//circular queue
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
	else if(f==(e+1)%size)
	{
		cout<<"overflow";
		
		
	}

	else
	{
		e=(e+1)%size;
		a[e]=p;
	}
	
}
void deq(int a[],int &f,int &e,int size)
{
	if((f==-1))
	{
		cout<<"Underflow";
	}

	else
	{
		f=(f+1)%size;
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
	if(f==(e+1)%size)
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
int i=f;
while(f>-1)
{
	cout<<a[i]<<endl;
	if(i==e)
	break;
	i=(i+1)%size;
	
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
		cout<<"1 Enqueue"<<endl;
		cout<<"2 Dequeue"<<endl;
		cout<<"3 check if Queue is full"<<endl;
		cout<<"4.check if Queue is empty"<<endl;
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