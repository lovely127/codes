#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int h,int k)
{
while(l<=h)
{
 int mid = (l+h)/2;
 if(k == arr[mid])
 {
  cout<<"element found at position - "<<mid<<endl;
 }
 else if(k < arr[mid])
 {
  binary_search(arr,l,mid-1,k);
 }
 else if(k > mid+1)
 {
  binary_search(arr,mid+1,h,k);
 }
}
}
int main()
{
 int n,arr[20],k,i;
 cout<<"enter the length of array -"<<endl;
 cin>>n;
 cout<<"enter the array-"<<endl;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<"enter the search element"<<endl;
 cin>>k;
 binary_search(arr,0,n-1,k);
 return 0;
 }
 
  
