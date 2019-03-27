#include<iostream>
using namespace std;
int main()
{
 int arr1[10][10],arr2[10][10];
 int arr3[10][10],r1,c1,r2,c2,i,j;
 cin>>r1>>c1;
 cout<<"enter the first array -\n";
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   cin>>arr1[i][j];
  }
 }
 for(i=0;i<r1;i++)
 {
  cout<<"\n";
  for(j=0;j<c1;j++)
  {
   cout<<arr1[i][j]<<" ";
  }
 }
 cout<<"\n";
 cin>>r2>>c2;
 cout<<"enter the second array - \n";
 for(i=0;i<r2;i++)
 {
  cout<<"\n";
  for(j=0;j<c2;j++)
  {
   cin>>arr2[i][j];
  }
 }
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   cout<<arr2[i][j]<<" ";
  }
 }
 cout<<"\n";
 if(r1!=r2 || c1!=c2)
 {
  cout<<"cant operate -\n";
 }
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   arr3[i][j] = arr1[i][j] + arr2[i][j];
  }
 }

for(i=0;i<r1;i++)
{
 cout<<"\n";
 for(j=0;j<c1;j++)
 {
  cout<<arr3[i][j]<<" ";
 }
}

cout<<"\n";
return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

