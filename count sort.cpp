#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
//count sort
int main()
{
    int arr[]= {1,3,2,3,4,1,6,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"befor sorting =>"<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }

    int count[10]= {0};
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int output[n];
    for(int i=n; i>=0; i--)
    {
        output[--count[arr[i]]]=arr[i];
    }

    cout<<endl<<"After sorting =>"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<output[i]<<" ";
    }

    return 0;
}