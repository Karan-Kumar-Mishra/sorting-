#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
//bucket sort
int main()
{

    float arr[]= {0.4,0.8,0.5,0.3,0.2,0.1,0.6,0.0,0.7,0.9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cerr<<"Befor sorting =>"<<endl;
    for(float x:arr)
    {
        clog<<x<<" ";
    }
    float sort[n];
    cout<<endl<<endl<<endl;;
    for(int i=0; i<n; i++)
    {
        int index=int(arr[i]*n);
        sort[index]=arr[i];
    }
    cout<<"After sorting =>"<<endl;
    for(float x:sort)
    {
        cout<<x<<" ";
    }

    return 0;
}