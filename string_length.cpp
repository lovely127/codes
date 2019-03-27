#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int i=0;
 char str[20];
 cout<<"enter the string -\n";
 cin>>str;
 while(str[i]!='\0')
 {
  i++;
 }
 cout<<i<<"\n";
 cout<<strlen(str)<<"\n";
 return 0;
}

