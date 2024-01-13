#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end-1;
        }
        return -1;
    }

}
int main()
{
    int n;
    int arr[1000];
    cout<<"enter the size of array";
    cin>>n;
    int key;
    cout<<"enter the key which you want to search";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element of array";
        cin>>arr[i];
    }
    cout<<binarysearch(arr,n,key);

}