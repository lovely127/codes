#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10][100];
	int n;
	cin>>n;
	cin.ignore();
     int i;
	for(i=0;i<n;i++)
	{
		cin.getline(a[i],100);
	}

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	char key[100];
	cout<<"enter the string you want to search"<<endl;
	cin>>key;

	for(i=0;i<n;i++)
	{
		if(strcmp(key,a[i])==0)
		{
			cout<<"string found at "<<i<<"th index"<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"string not found;"<<endl;
	}
	return 0;
}