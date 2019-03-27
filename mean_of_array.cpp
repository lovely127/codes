#include<iostream>
using namespace std;
int main()
{
 int i,j,m,s=0,n;
 int arr[50];
 cout<<"enter the length of array - ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  s = s+arr[i];
 }
 cout<<"sum of array is - "<<s<<"\n";
  m = s/n;
  cout<<"mean of array is - "<<m<<"\n";
  return 0;
  }
 
 
