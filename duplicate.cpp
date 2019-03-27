#include<iostream>
using namespace std;
int main()
{
 int i,j,n,f=0;
 int arr[50];
 cout<<"enter the size of the array - ";
 cin>>n;
 cout<<"enter the elements of the array - ";
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[i] == arr[j])
   {
    f=1; 
    cout<<"duplicates found at positions - "<<i+1<<" "<<j+1<<"\n";
   }
  }
 }
 if(f==0)
 cout<<"no duplicates found\n";
 return 0;
}
 
 
 
