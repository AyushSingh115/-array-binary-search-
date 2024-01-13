#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10,12};
    int start=0,end=5,mid,ans=arr[0];
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
        cout<<" "<ans;
    }

}