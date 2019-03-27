#include<iostream>
using namespace std;
int main()
{ 
 int i,n;
 int arr[20];
 cout<<"enter the no of elements - ";
 cin>>n;
 for(i=0;i<n;i++)
 { 
  cin>>arr[i];
 }
 cout<<"the elements are -";
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 return 0;
 }
 
