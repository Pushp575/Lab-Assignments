//SIMPLE BUBBLE SORT 
#include<iostream>
using namespace std;
int main ()
{
	int a[6]={1,3,2,4,5,0};
	for(int i=0;i<6-1;i++)//traversal from 0 to n-1
	{
		for(int j=0;j<6-1-i;j++)//traversal from 0 to n-1-i
		{
			if(a[j]>a[j+1])
			{	//swap it
				int temp ;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array is :\n";
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<endl;
	}
	
}