//Find missing number
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elments in the array: "<<endl;
  cin>>n;

  int arr[100];
  int sum=0;

  cout<<"Enter the array elements: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    sum += arr[i];
  }
  int total=(n+1)*(n+2) / 2;
  int missing = total - sum; 
  cout<<"The missing number is: "<<missing <<endl;

  return 0;
}