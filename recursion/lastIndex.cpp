#include<iostream>

using namespace std;

int lastIndex(int arr[],int n,int x){

    if(n==0) return -1; 
   if(arr[n-1]==x) return n-1;
   
   int ans=lastIndex(arr,n-1,x);
   if(ans==-1) return -1;
   else return ans;

     
}

int main(){

int arr[]={1,3,5,2,3,5,1,4,2,1};
  
cout<<lastIndex(arr,sizeof(arr)/sizeof(arr[0]),1);

    return 0;
}