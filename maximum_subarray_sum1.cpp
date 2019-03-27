#include<iostream>
using namespace std;
int main()
{
 int i,j,k,n,arr[20],maxsum=0,sum,l,r;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
  sum =0;
   for(k=i;k<=j;k++)
   {
    sum = sum + arr[k];
   }
   cout<<sum<<endl;
   if(sum>maxsum)
   {
   l=i;
   r=j;
    maxsum = sum; 
   }
  }
 }
 cout<<"max-sum is -"<<maxsum<<endl;
 for(int m=l;m<=j;m++)
 {
  cout<<arr[m]<<",";
  }
 return 0;
 }
