#include<iostream>
using namespace std;
int increment(int a)
{
 a = a+1;
 cout<<"inside fun "<<a<<endl;
 return a;
}
int main()
{
 int a;
 cin>>a;
 increment(a);
 cout<<"inside main "<<a<<endl;
 return 0;
 }
