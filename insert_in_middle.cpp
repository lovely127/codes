#include<iostream>
using namespace std;
int main()
{
 int arr[10],i,n,num,pos,j=0;
 cout<<"enter the length of array -\n";
 cin>>n;
 cout<<"enter the array -\n";
 for(i=0;i<n;i++)
 { 
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 { 
  cout<<arr[i]<<" ";
 }
 cout<<"enter the new number which u want to insert-\n";
 cin>>num;
 cout<<"enter the position where you want to insert -\n";
 cin>>pos;
 for(i=n-1;i>=pos;i--)
 {
  arr[i+1] = arr[i];
 }
 arr[pos] = num;
 n = n+1;
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<"\n";
 return 0;
 } 
 
 
 
