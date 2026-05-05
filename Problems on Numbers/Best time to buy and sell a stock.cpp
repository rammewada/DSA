#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main(){
   int n;
    vector<int> arr;
   cin>>n;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
   }
   
   int buyPrice=INT_MAX;
   int profit=INT_MIN;

   for(int i=0;i<n;i++){
      if(buyPrice>arr[i]){
        buyPrice=arr[i];
      }
      else if(arr[i]-buyPrice>profit){
        profit=arr[i]-buyPrice;
      }
   }
   
   cout<<profit;
  

    return 0;
}