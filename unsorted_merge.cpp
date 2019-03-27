#include<iostream>
using namespace std;
int main()
{
 int arr1[10],arr2[10],arr3[20],i,n1,n2,m,j=0;
 cout<<"enter the length of the first array - \n";
 cin>>n1;
 cout<<"enter the first array - \n";
 for(i=0;i<n1;i++)
 {
  cin>>arr1[i];
 }
 cout<<"enter the length of second array - \n";
 cin>>n2;
 cout<<"enter the second array - \n";
 for(i=0;i<n2;i++)
 {
  cin>>arr2[i];
 }
 m = n1+n2;
 
 for(i=0;i<n1;i++)
 {
  arr3[j] = arr1[i];
  j++;
 }
 for(i=0;i<n2;i++)
 {
  arr3[j] = arr2[i];
  j++;
 }
 
 for(i=0;i<m;i++)
 {
  cout<<arr3[i]<<" ";
 }
 cout<<"\n";
 return 0;
 }
 
 
 
 
 
 
 
 
