#include<iostream>
using namespace std;
int main()
{
 char a[100];
 cin>>a;
 int i=0;
 while(a[i]!= '\0')
 {
  if(a[i] == '9')
  {
   i++;
  }
   int digit = a[i] - '0';//converts char into digit
  if(digit >= 5)
  {
   digit = 9 - digit;
   a[i] = digit + '0';
  }
 i++;
 }
 cout<<a;
 cout<<endl;
  return 0;
  }
  
   
   
 
