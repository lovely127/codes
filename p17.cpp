#include<iostream>
#include<cstring>
using namespace std;
void rotate(char *arr,int k)
{
 int n,i;
 n = strlen(arr);
 for(i=n;i>=0;i--)
 {
  arr[i+k] = arr[i]; //shifting all elemnts by k;
 }
 int j,s=0,m;
 m = strlen(arr);
 for(j=m-k;j<m;j++)
 {
  arr[s] = arr[j];
  s++;
 }
 arr[m-k] ='\0';
}
int main()
{
 //char arr[100] = "CodingBlocks";
 char arr[100];
 cin.get(arr,100);
 int k;
 cout<<"enter the letters you want to rotate-";
 cin>>k;
 rotate(arr,k);
 cout<<arr<<endl;
 return 0;
 }

