#include<iostream>
using namespace std;
int main()
{
 int i,j,n,pos,m;
 int arr[50];
 cout<<"enter the length of array - ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<"enter the position where u want to insert - ";
 cin>>pos;
 cout<<"enter the element which u want to insert - ";
 cin>>m;
 
 for(i=n-1;i>=pos;i--)
 {
  arr[i+1] = arr[i];
 }
 arr[pos] = m;
 n = n+1;
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<"\n";
 return 0;
}
 
