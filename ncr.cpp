#include<iostream>
using namespace std;
int fact(int n)
{
  int f=1,i;
  for(i=1;i<=n;i++)
  {
    f = f*i;
  }
  return f;
}
int main()
{
 int rfact,nfact,nrfact,ans,n,r;
 cin>>n>>r;
 nfact = fact(n);
 rfact = fact(r);
 nrfact = fact(n-r);
 
 ans = nfact/(rfact*nrfact);
 cout<<nfact<<endl;
 cout<<rfact<<endl;
 cout<<nrfact<<endl;
 cout<<ans<<endl;
 return 0;
 }
 

