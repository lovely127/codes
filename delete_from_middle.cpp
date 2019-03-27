#include<iostream>
using namespace std;
int main()
{
 int arr[10],i,n,pos;
 cout<<"enter the length of the array - \n";
 cin>>n;
 cout<<"enter the array - \n";
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<"enter the position from where u want to delete - \n";
 cin>>pos;
 for(i=n-1;i>pos;i--)
 {
  arr[i-1] = arr[i];
 }
 n = n-1;
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<"\n";
 return 0;
 }
 
