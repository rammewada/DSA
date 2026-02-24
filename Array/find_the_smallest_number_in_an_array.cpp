#include<iostream>
#include<climits>

using namespace std;

int main (){
    int arr[10]={2,34,5,12,57,44,31,9,3}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        smallest = min(smallest,arr[i]);
    }

    cout<<"The smallest number in the array is "<<smallest;
    return 0;

}