#include<iostream>
using namespace std;
int main()
{
 int i,j,n,large,slarge;
 //int n;
 int arr[20];
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 large = arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]>large)
  {
   large = arr[i];
   //temp = arr[i];
  }
 }
 slarge = arr[1];
 cout<<"******"<<slarge<<"\n";
 for(i=2;i<n;i++)
 {
  if(arr[i]>slarge && arr[i]!=large)
  {
   slarge = arr[i];
  }
 }
 cout<<"the large number is - "<<large<<"\n";
 cout<<"second large is - "<<slarge<<"\n";
 return 0;
 }
 
 
