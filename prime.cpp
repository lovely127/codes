#include<iostream>
using namespace std;
int main()
{
 int n,i,f=0;
 cout<<"enter the number - ";
 cin>>n;
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
   f=1;
   break;
  }
 }
 if(f==1)
 cout<<"composite\n";
 else
 cout<<"prime\n";
 return 0;
 }
