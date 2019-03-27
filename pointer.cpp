#include<iostream>
//void sum(int*,int*);
using namespace std;
void sum(int*a,int*b,int*t)
{ 
 //int *t;
 *t = *a + *b;
 
}
int main()
{
 int x,y,t;
 cout<<"enter the first num - ";
 cin>>x;
 cout<<"enter the second num - ";
 cin>>y;
 sum(&x,&y,&t);
 cout<<t<<"\n";
 return 0;
 }


 
