#include<iostream>
using namespace std;
int main()
{
 int i,j,k,n,arr[20];
 cout<<"enter the length of array-"<<endl;
 cin>>n;
 cout<<"enter the array - "<<endl;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<"enter the element X -"<<endl;
 cin>>k;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(k == (arr[i]+arr[j]))
   {
    cout<<"pairs are - ("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
   }
  }
 }
  return 0;
  }
