#include<iostream>
using namespace std;

int countinversionarray(int arr[], int n)
{
    int count=0;

    
    for(int i=0,j=1 ; i<n-1 ; )
    {
        
        if (arr[i]>arr[j] && i<j && i!=j){
            count++;
            cout<<"( "<<arr[i]<<", "<<arr[j]<<" )";
        }
        if(j==n-1 ){
            j=0;
            i++;
        }

        j++;
    }
    if (count==0)
    {
        cout<<"0";
    }
    return 0 ;
}

int main(){
    int Arr[]={2, 4, 1, 3, 5},N;
    N=sizeof(Arr)/sizeof(Arr[1]);
    countinversionarray(Arr,N);
}