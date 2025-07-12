#include <iostream>
#include<cmath>
using namespace std;
int square(int x)
{
    int root;
    if(x>0)
        root=sqrt(x);
    return root*root==x;
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(square(arr[i]))
        {
            sum=sum+arr[i];
        }
    }
    cout<<sum;
    return 0;
}
