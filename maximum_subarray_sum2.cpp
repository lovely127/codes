#include<iostream>
using namespace std;
int main()
{
 int i,j,n,k,sum,maxsum=0,l=0,r=0,m;
 int arr[20];
 int cumsum[100] = {0};
 cin>>n;
 cin>>arr[0];
 cumsum[0] = arr[0];
 for(i=1;i<n;i++)
 {
  cin>>arr[i];
  cumsum[i] = cumsum[i-1] + arr[i];
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   sum = 0;
   sum = cumsum[j] - cumsum[i-1];
  if(sum>maxsum)
  {
   maxsum = sum;
   l=i;
   r=j;
  }
 }
 }
 cout<<"maxsum is - "<<maxsum<<endl;
 for(m=l;m<=r;m++)
 {
  cout<<arr[m]<<",";
  }
  cout<<endl;
 return 0;
 }

