#include<iostream>
using namespace std;
int main()
{
    int nums[];
    int target,start=0,end=nums.size()-1,first=-1,last=-1,mid;
    //find first
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        else if(nums[mid<target])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    //find last
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        else if(nums[mid<target])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    int a[2];
    a[0]='first';
    a[1]='last';
    cout<<a;
}