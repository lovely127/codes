#include<iostream>
using namespace std;
int main()
{
 int i ,j,n,min,pos;
 int arr[20];
 cout<<"enter the length of array - ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 min = arr[0];
 pos =0;
 for(i=1;i<n;i++)
 {
  if(arr[i]<min)
  {
   min = arr[i];
   pos = i;
  }
 }
 cout<<"the smallest number is - "<<min<"\n";
 cout<<"\nthe position is - "<<pos<<"\n";
 return 0;
 }
  
 

