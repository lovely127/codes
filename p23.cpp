#include<bits/stdc++.h>
using namespace std;
void read_matrix(int arr[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
}

void print_matrix(int arr[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void spiral_print(int arr[10][10],int r,int c)
{
	int startrow = 0,endrow = r-1;
	int startcol = 0,endcol = c-1;
	int i,j;
	while(startrow<=endrow && startcol<=endcol)
	{ 
		//print startrow
		for(j=startcol;j<endcol;j++)
		{
			cout<<arr[startrow][j]<<" ";
		}
		startrow++;
        //print endcol
		for(i=startrow;i<endrow;i++)
		{
			cout<<arr[i][endcol]<<" ";
		}
		endcol--;
		//print endrow
		if(endrow>startrow)
		{
		for(j=endcol;j>=startcol;j--)
		{
			cout<<arr[endrow][j]<<" ";
		}

		endrow--;
	}
		//print startcol
	    if(endcol>startcol)
	    {
		for(i=endrow;i>=startrow;i--)
		{
			cout<<arr[i][startcol]<<" ";
		}
	
		startcol++;

      }
	}
}
int main()
{
	int r,c;
	cin>>r>>c;
	int arr[10][10];
	read_matrix(arr,r,c);
	print_matrix(arr,r,c);
	spiral_print(arr,r,c);
	return 0;

}