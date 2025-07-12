#include <iostream>
using namespace std;
int findType(int n,int *arr)
{
    int ecount=0,ocount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        ecount++;
        else if(arr[i]%2!=0)
        ocount++;
    }
    if(ecount==n)
    return 1;
    else if(ocount==n)
    return 2;
    else
    return 3;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=findType(n,arr);
    if(res==1)
    cout<<"Even";
    else if(res==2)
    cout<<"Odd";
    else
    cout<<"Mixed";
    return 0;
}
