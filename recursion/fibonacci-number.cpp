#include<iostream>

using namespace std;

int nThfibonacci(int n){
    
    if(n==0) return 0;
    else if(n==1) return 1;

    return nThfibonacci(n-1)+nThfibonacci(n-2);
}
int main(){
 int n=6;
   int res=nThfibonacci(n);
   cout<<res;
    
    return 0;
}