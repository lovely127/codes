#include<bits/stdc++.h>
using namespace std;
void read_matrix(int arr[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cin>>arr[i][j];
  }
 }
}
void print_matrix(int arr[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cout<<arr[i][j]<<" ";
  }
  cout<<endl;
 }
}
void print_wave_matrix(int arr[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<c;i++)
 {
  if(i%2==0)
  {
   for(j=0;j<r;j++)
   {
    cout<<arr[j][i]<<" ";
   }
  }
  else
  for(j=r-1;j>=0;j--)
  {
   cout<<arr[j][i]<<" ";
  }
 }
}
int main()
{
 int r,c;
 int arr[10][10];
 cin>>r>>c;
 read_matrix(arr,r,c);
 print_matrix(arr,r,c);
 print_wave_matrix(arr,r,c);
 cout<<endl;
 return 0;
}
 

