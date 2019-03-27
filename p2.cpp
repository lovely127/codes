#include<iostream>
using namespace std;
int smallest(int arr[],int k,int n);
void selection_sort(int arr[],int n);
int main()
{
 int arr[20],n,i,k;
 cout<<"enter the length of array- "<<endl;
 cin>>n;
 cout<<"enter the elements of array -"<<endl;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 cout<<"sorted array is -"<<endl;
 selection_sort(arr,n);
 for(i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 return 0;
}
 int smallest(int arr[],int k,int n)
{
 int i,min,pos=k;
 min = arr[k];
 for(i=k+1;i<n;i++)
 {
  if(arr[i]<min)
  {
   min = arr[i];
   pos = i;
   //cout<<"smallest element"<<arr[pos]<<endl;
  }
  }
  return pos;
}
void selection_sort(int arr[],int n)
{
  int k,pos,temp;
  for(k=0;k<n;k++)
  {
   pos = smallest(arr,k,n);
   //cout<<arr[pos]<<" "<<"swap with "<<arr[k]<<endl;
   temp = arr[k];
   arr[k] = arr[pos];
   arr[pos] = temp;
   
   }
}
 
