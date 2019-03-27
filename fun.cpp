#include<iostream>
//int evenodd(int);
using namespace std;
int evenodd(int);
int main()
{
 int f,n;
 cout<<"enter the number - ";
 cin>>n;
 f = evenodd(n);
 if(f==0)
 cout<<"even\n";
 else
 cout<<"odd\n";
 return 0;
 }
 int evenodd(int a)
 {
  if(a%2==0)
  return 0;
  else
  return 1;
  }
 
