#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10,1,3};
    int start=0,end=6,ans=arr[0],mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    cout<<ans;
}