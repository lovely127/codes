#include<bits/stdc++.h>
using namespace std;
int main()
{
 char s[100];
 cin>>s;
 int i,j,k;
 int n = strlen(s);
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   for(k=i;k<=j;k++)
   {
    cout<<s[k];
    }
    cout<<endl;
  }
 }
 return 0;
 }

