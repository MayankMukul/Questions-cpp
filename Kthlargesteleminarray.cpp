#include<iostream>
#include<algorithm>

using namespace std;

int findkthlargest(int arr[],int k,int size)
{
    

    int mid = size/2;

    if (k<=mid){
        sort(arr, arr+size,greater<int>()); }
    else if (k>mid){
        sort(arr , arr+size);}

    //for(int i=0;i<=k;i++)
    
    //    if(i==k)
            cout<<"\nlargest element : "<<arr[k-1];
    
    return 0;
}

int main ()
{
    int ar[ ]= {3,2,3,1,2,4,5,5,6};
    int k=4;
    int s = sizeof(ar)/sizeof(ar[0]);

    findkthlargest(ar, k, s);
}