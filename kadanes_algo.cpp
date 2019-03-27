#include<iostream>
using namespace std;
int main()
{
 int n ,arr[100],sum=0,maxsum=0,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  sum = sum + arr[i];
  if(sum<0)
  {
   sum = 0;
  }
  maxsum = max(maxsum,sum);
 }
 cout<<"maxsum is - "<<maxsum<<endl;
 return 0;
}
