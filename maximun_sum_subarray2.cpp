#include<iostream>
using namespace std;
int main()
{
 int i,j,n,k,sum,maxsum=0;
 int arr[20],cumsum[20];
 cin>>n;
 cin>>arr[0];
 cumsum[0] = arr[0];
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
  cumsum[i] = cumsum[i-1] + arr[i];
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   sum = cumsum[j] - cumsum[i-1];
  }
  if(sum>maxsum)
  {
   maxsum = sum;
  }
 }
 cout<<"maxsum is - "<<maxsum<<endl;
 return 0;
 }

