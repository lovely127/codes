#include<iostream>
using namespace std;
int main()
{
 int arr1[10],arr2[10],arr3[20],i=0,n1,n2,m,j=0,k=0;
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
//idea
while(i<n1 && j<n2)
{
 if(arr1[i]<arr2[j])
 {
  arr3[k] = arr1[i];
  i++;
 }
 else
 {
  arr3[k] = arr2[j];
  j++;
 }
 k++;
 }
 //if first array is completed then copy second array as it is
 if(i==n1)
 {
  while(j<n2)
  {
   arr3[k] = arr2[j];
   j++;
   k++;
  }
 }
 //if second array is completed then copy first array
 else if(j==n2)
 {
  while(i<n1)
  {
   arr3[k] = arr1[i];
   i++;
   k++;
  }
 }
 cout<<m<<"\n";
 for(i=0;i<m;i++)
 {
  cout<<arr3[i]<<" ";
 }
 cout<<"\n";
 
 return 0;
}
  ///cant run
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

