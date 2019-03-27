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

void staircase_search(int arr[10][10],int r,int c,int k)
{
    int i=0,j=c-1;
    while(i<r && j>=0)
    {
        if(arr[i][j] == k)
        {
            cout<<"element is found at "<<i<<" "<<j<<endl;
            return;
        }
        else if(arr[i][j]<k)
        {
            i++;
        }
        else
            j--;
    }
    cout<<"element not found"<<endl;
    return;
}
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[10][10];
    read_matrix(arr,r,c);
    print_matrix(arr,r,c);
    int k;
    cout<<"enter the element to be search"<<endl;
    cin>>k;
    staircase_search(arr,r,c,k);
    return 0;
}