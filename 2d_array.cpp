#include<iostream>
using namespace std;
int main()
{
 int i,j,n,m,arr[10][10];
 cout<<"enter the number of rows and column - \n";
 cin>>n>>m;
 cout<<"enter the elements of array - \n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cin>>arr[i][j];
  }
 }
 cout<<"the 2-d array is - \n";
 for(i=0;i<n;i++)
 {
  cout<<"\n";
  for(j=0;j<m;j++)
  {
   cout<<arr[i][j]<<" ";
  }
 }
 cout<<"\n";
 return 0;
 }

