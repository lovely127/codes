#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 string s("hello world");
 cout<<s<<endl;
 
 string s2 = "Another way !";
 cout<<s2<<endl;
 cout<<s2.length()<<endl;
 for(int i=0;i<s2.length();i++)
 {
  cout<<s2[i]<<"-";
 }
 cout<<endl;
 
 /*string s3;
 getline(cin,s3);
 cout<<s3<<endl;*/
 
 string arr[] = {"apple","pineapple","mango","guavava"};
 for(int j=0;j<4;j++)
 {
  cout<<arr[j]<<endl;
 }
 //for soting
 sort(arr,arr+4);
 for(int j=0;j<4;j++)
 {
  cout<<arr[j]<<endl;
 }
 
 
 return 0;
 }

