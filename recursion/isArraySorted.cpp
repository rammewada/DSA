#include<iostream>

using namespace std;

bool isSorted(int const * const arr,int n){
      if(n==0 || n==1) return true;
      else if(arr[0]>arr[1]) return false;

    return isSorted(arr+1,n-1);

}

int  main(){


    int arr[5]={1,2,3,4,5};

     cout<<isSorted(arr,sizeof(arr)/sizeof(arr[0]));

return 0;
}