#include<iostream>
#include<stdio.h>
using namespace std;
int swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partion(int arr[],int l,int r)
{
    int piovt=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(arr[j]<piovt)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
int quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partion(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]= {5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
