#include<iostream>
#include<stdio.h>
using namespace std;
//Bubble sort
int main()
{
    int arr[]= {7,9,3,4,34,78,23,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int x:arr)
    cout<<x<<" ";
    int temp;
    cout<<endl<<endl;
    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}