/*#include<iostream>// -->(REVERSING AN ARRAY)<--

using namespace std;

int main(){
  int arr[]={1,2,3,4,5};
  int n=5;

  int start=0,end=n-1;
  while(start<end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  cout<<"Reversed array"<<endl;
  for(int i=0;i<n;i++)

  cout<<arr[i]<<" ";
  cout<<endl;
}
*/
 /* #include<iostream>//-->(MULTIPLICATION OF TWO MATRIX)<--

 using namespace std;

 int main()
 {
  int A[10][10],B[10][10],result[10][10]={0};
  int r1,c1,r2,c2;

  cout<<"Enter rows and columns of Matrix A: ";
  cin>>r1>>c1;

  cout<<"Enter rows and columns of Matrix B: ";
  cin>>r2>>c2;

  if(c1 != r2){
    cout<<"Matrix multiplication is not posssible.Columns of a A must be equal to no. of ros of B."<<endl;
    return 0;  
  }

  cout<<"Enter the elements of matrix A: "<<endl;
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin >> A[i][j];
    }
  }

  cout<<"Enter the elements of matrix B: "<<endl;
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>B[i][j];
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      for(int k=0;k<c1;k++){
        result[i][j] += A[i][k]*B[k][j];
      }
    }
  }
  cout<<"Resultant Matrix (A x B): "<<endl;
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
 }
*/
#include<iostream>-->(TRANSPOSE OF A MATRIX)<--

using namespace std;

int main()
{
  int A[10][10],transpose[10][10];
  int rows,cols;

  cout<<"Enter number of rows and columns: ";
  cin >> rows >> cols;
  
  cout<<"Enter elements of matrix: "<<endl;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      cin >> A[i][j];
    }
  }

  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      transpose[j][i]=A[i][j];
    }
  }

  cout<<"Transpose of matrix: "<<endl;
  for(int i=0;i<cols;i++){
    for(int j=0;j<rows;j++){
      cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}