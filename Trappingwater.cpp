#include<iostream>

using namespace std;

int trappingwater(int arr[],int size)
{
    
    int maxleft=0,maxright=0,water,maxwater=0;

    for(int i = 0;i<size;i++)
    {   
        water=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>maxleft)
                maxleft=arr[j];
        }

        for(int k=i;k<size;k++){
            if(arr[k]>maxright)
                maxright=arr[k];
        }

        water=min(maxleft,maxright)-arr[i];

        maxwater=maxwater+water;
        

    }
    cout<<"watertrapped : " <<maxwater;
}

int main(){
    int A[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int s = sizeof(A)/sizeof(A[0]);
    trappingwater(A,s);

}