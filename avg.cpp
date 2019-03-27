#include<iostream>
using namespace std;
int main()
{ 
 int n,i,s=0;
 float avg;
 cout<<"enter the value of n - ";
 cin>>n;
 for(i=1;i<=n;i++)
 s=s+i;
 cout<<"sum is "<<s<<"\n";
 avg = (float)s/n;
 cout<<"avg is "<<avg<<"\n";
 return 0;
 }
 
 
 
