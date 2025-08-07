#include <iostream>
using namespace std;
int *createarray(int size)
{
    return new int[size+1];
}
void getelements(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int insert(int *arr,int n,int pos,int element)
{
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    cout<<"Array Insertion:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int *arr=createarray(n);
    getelements(arr,n);
    int pos;
    cin>>pos;
    if(pos>n||pos<0)
    {
        cout<<"INVALID INPUT";
        return 0;
    }
    pos=pos-1;
    int element;
    cin>>element;
    insert(arr,n,pos,element);
    return 0;
}
