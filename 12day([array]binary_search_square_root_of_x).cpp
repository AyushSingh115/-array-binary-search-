#include<iostream>
using namespace std;
int main()
{
    int ans,start=1,mid;
    int x;
    cout<<"enter the target";
    cin>>x;
    int end=x;
    while(start<=end)
{
mid=start+(end-start)/2;
      if(mid*mid==x)
      {
        ans=mid;
        break;
     }
      else if(mid*mid<x)
{
          ans=mid;
          start=mid+1;
}
      else
{
          end=mid-1;
}
}
    cout<<"square root  of x:- "<<ans;
}
