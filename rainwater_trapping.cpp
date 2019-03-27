#include<iostream>
using namespace std;
int main()
{
 int n,i,s=0;
 int arr[20];
 int left_highest[20] = {0};
 int right_highest[20] = {0};
 int w[100] = {0};
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 
 left_highest[0] = arr[0];
 right_highest[n-1] = arr[n-1];
 //left highest array-
 for(i=1;i<n;i++)
 {
  left_highest[i] = max(left_highest[i-1],arr[i]);
   //cout<<left_highest[i]<<",";
 }
 //for right highest array -
 for(i=n-2;i>=0;i--)
 {
  right_highest[i] = max(right_highest[i+1],arr[i]);
  //cout<<right_highest[i]<<",";
 }
 for(i=0;i<n;i++)
 {
  w[i] = (min(left_highest[i],right_highest[i]) - arr[i]);
  s = s + w[i];
  }
  cout<<s<<endl;
  
  return 0;
  }
 
 

