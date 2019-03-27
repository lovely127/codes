#include<iostream>
#include<cstring>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
 char s1[100],s2[100];
 cin>>s1>>s2;
 int n1 = strlen(s1);
 int n2 = strlen(s2);
 sort(s1,s1+n1);
 sort(s2,s2+n2);
 if(strcmp(s1,s2)==0)
 {
 cout<<"are permutations"<<endl;
 }
 else
 cout<<"not"<<endl;
 return 0;
 
}

