#include <iostream>
using namespace std;

int main()
{
	int t,n,arr[100],i,max=0;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    max = arr[0];
	    for(i=0;i<n;i++)
	    {
	     if(arr[i]>max)
	     {
	         max = arr[i];
	     }
	    }
	    cout<<max<<endl;
            t--;
	}
	return 0;
}
