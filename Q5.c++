#include<iostream>

using namespace std;

int main()
{
  int rows,cols,i,j,rowSum,colSum;

  cout<<"Enter the number of rows: ";
  cin>>rows;
  cout<<"Enter the number of columns: ";
  cin>>cols;

  int arr[100][100];
  cout<<"Enter the elements of an array: "<<endl;
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"Sum of each row: "<<endl;
  for(int i=0;i<rows;i++)
  {
    int rowSum=0;
    for(int j=0;j<cols;j++){
      rowSum+=arr[i][j];
    }
    cout<<"Row"<<i+1<<" : "<< rowSum<<endl;
  }
  cout<<"sum of each column: "<<endl;
  for(int i=0;i<rows;i++)
  {
    int colSum=0;
    for(int j=0;j<cols;j++)
    {
      colSum+=arr[i][j];
    }
    cout<<"Column"<<j+1<<" : "<< colSum<<endl;
  }
}