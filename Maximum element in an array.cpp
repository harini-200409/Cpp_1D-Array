#include <iostream>
using namespace std;
int maximum(int n,int *arr)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    return temp;
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
    int res=maximum(n,arr);
    cout<<res;
    
    return 0;
}
