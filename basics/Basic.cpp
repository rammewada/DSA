// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<string>
using namespace std;
int main() {
     int arr[5]={3,5,7,2,4};
    
     for(int i=1; i<sizeof(arr)/sizeof(arr[0]);i++){
       
      int j=i-1;
      int temp=arr[i];

      while(j>=0 && arr[j]>temp){
              arr[j+1]=arr[j];
              j--;
      }
    arr[j+1]=temp;

     }

     for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
     }
 

    return 0;
}