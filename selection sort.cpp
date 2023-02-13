#include<iostream>
#include<stdio.h>
using namespace std;
//selection sort
int main()
{
    int min;
    int arr[]= {56,7,8,2,67,45,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(i!=min)
        {
            swap(arr[i],arr[min]);
        }
    }
    cout<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}


