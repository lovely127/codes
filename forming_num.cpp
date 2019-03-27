#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,n,s=0;
 int arr[20];
 cout<<"enter the length of number - ";
 cin>>n;
 for(i=0;i<n;i++)
 {
   cin>>arr[i];
  }
 for(i=0;i<n;i++)
 {
  s = s + (arr[i])*pow(10,i);
 }
 cout<<"the number is - "<<s<<"\n";
 return 0;
 }

