#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
 int i,s=0;
 for(i=0;i<n;i++)
 {
  s = s + arr[i];
  }
  return s;
}
int main()
{
 int n,i,arr[20],c;
 cout<<"enter the length of array - "<<endl;
 cin>>n;
 cout<<"enter the elements of the array - "<<endl;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 c = sum(arr,n);
 cout<<"sum is - "<<c<<endl;
 return 0;
}

