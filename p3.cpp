#include<iostream>
using namespace std;
int main()
{
 int n,m,i=0,j=0,k,l;
 cin>>m,n;
 l=m+n;
 int arr1[l],arr2[n];
 cout<<"enter the first array - "<<endl;
 for(i=0;i<m;i++)
 {
  cin>>arr1[i];
 }
 cout<<"enter the second array - "<<endl;
 for(j=0;j<m;j++)
 {
  cin>>arr2[j];
 }
 while(i<l && j<n)
 {
  j=0;
  i=m;
  arr1[i] = arr2[j];
  j++;
  i++;
 }
 cout<<l<<endl;
 for(k=0;k<l;k++)
 {
  cout<<arr1[k]<<" ";
 }
 cout<<endl;
 return 0;
 }
 
   

