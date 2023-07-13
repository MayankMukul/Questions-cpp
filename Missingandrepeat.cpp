// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int missandrep(int ar[],int n){
    sort(ar,ar+n);
    
    for(int i=0; i < n-1 ;i++)
    {
       // if(ar[i]<ar[i+1])
        if(ar[i]==ar[i+1])
        cout<<"\nrepeative element : "<<ar[i];

    //    if(ar[i]!=i+1)
      //      cout<<"\n Missing element : "<<i+1;

        
    }

   for(int j=1; j < n ;j++){
       if(ar[j-1]!=j)
         cout<<"\n Missing element : "<<j;
        break;
 }
    return 0;
}




int main() {
    // Write C++ code here
    int a[ ]={ 1,1,2,3,4,6 };
    int n=sizeof(a)/sizeof(a[0]);
    cout << "Hello world!";
    
    missandrep(a,n);

    return 0;
}