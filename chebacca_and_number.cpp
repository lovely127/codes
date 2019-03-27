#include<iostream>
using namespace std;
int main()
{
 int arr[100],i,n;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  if(arr[i]== 9)
  {
   i++;
  }
  if(arr[i]>=5)
  {
   arr[i] = 9 - arr[i];
  }
 }
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<",";
 }
 return 0;
 }
