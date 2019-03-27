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
 for(i=0;i<pos;i++)
 {
  arr[j] = arr[i];
  j++;
 }
 arr[j++] = num;
 cout<<pos<<"\n";
 for(i=pos;i<n;i++)
 {
  arr[j] = arr[i];
  cout<<arr[j]<<" ";
  j++;
 }
 /*for(j=0;j<n+1;j++)
 {
  cout<<arr[j]<<" ";
 }*/
 return 0;
 }
 
 
 
 
