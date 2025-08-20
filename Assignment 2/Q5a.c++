//Diagonal Matrix-->
#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of diagonal elements: ";
  cin>>n;
  cout<<endl;
  cout<<"Enter the number of elements: ";
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int p=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)
      {
        cout<<a[p]<<" ";
        p++;
      }
      else
      {
        cout<<"0 ";
      } 
    }
    cout<<endl;
  }
}