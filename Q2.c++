//Bubble sort
#include <iostream>

using namespace std;

int main()
{
  int array[10]={1,209,385,56,96,7,8,9,10};
  int n=10;

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(array[j]>array[j+1])
      {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<"Sorted Array"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<< array[i] <<" ";
  }
  cout<<endl;
  return 0;
}