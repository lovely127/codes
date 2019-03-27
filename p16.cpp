#include<iostream>
#include<cstring>
using namespace std;
void reverse(string arr)
{
 int n,i;
 n = arr.length();
 for(i=n-1;i>=0;i--)
 {
  cout<<arr[i];
  }
}
int main()
{
 char arr[100];
 //cin>>arr; for a word
 cin.get(arr,100);// for line
 reverse(arr);
 return 0;
}
 
