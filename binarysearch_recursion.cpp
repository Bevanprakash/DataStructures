#include<iostream>
using namespace std;

void print(int arr[],int s,int e)
{
    for(int i=s;i<e;i++)
    {
        cout<<arr[i]<<" ";
    }
}

bool binarysearch(int arr[],int s,int e,int key)
{
    cout<<endl;
    print(arr,s,e);
    if(s>e)
    {
        return false;
    }
    
    
    
    int mid=s+(e-s)/2;
    
    if(arr[mid]==key)
    {
        return true;
    }
    
    if(arr[mid]<key)
    {
        return binarysearch(arr,mid+1,e,key);
    }
    else
    {
       return  binarysearch(arr,s,mid-1,key);
    }
};

int main()
{
    int arr[6]={4,5,6,9,20};
    bool a=binarysearch(arr,0,5,7);
    cout<<"the element prestent or not "<<a;
}