#include <iostream>
using namespace std;
int function(int *arr1,int n1,int *arr2,int n2)
{
    int sum1=0,sum2=0;
    for(int i=0;i<n1;i++)
    {
        sum1=sum1+arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        sum2=sum2+arr2[i];
    }
    if((sum1==sum2)&&(n1==n2))
    {
        return 1;
    }
    else
    {
    return 2;
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int res=function(arr1,n1,arr2,n2);
    if(res==1)
    cout<<"Same";
    else 
    cout<<"Not same";
    return 0;
}
