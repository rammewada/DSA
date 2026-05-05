#include<iostream>

using namespace std;

int firstINdex(int arr[],int n,int x){

    if(n==0) return -1; 
   if(arr[0]==x) return 0;
   
   int ans=firstINdex(arr+1,n-1,x);
   if(ans==-1) return -1;
   else return ans+1;

    
}

int main(){

int arr[]={1,3,5,2,3,5,1,4,2};
  
cout<<firstINdex(arr,sizeof(arr)/sizeof(arr[0]),3);

    return 0;
}