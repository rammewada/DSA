#include<iostream>
#include<bitset>
#include<algorithm>
#include<cmath>
 
using namespace std;

string DecimalToBinary(int num){
    string binary="";
    int temp=num;

    while(temp){
     int bit = temp%2;
     temp=temp/2;
     binary+=to_string(bit);
    }
     
    return binary;
}


int main () {
    
   int num;
   cin>>num; 

//    cout<<bitset<8>(num);
   if(num==0){
    cout<<0;
    return 0;
   }
   
  string res=DecimalToBinary(num);
   
   reverse(&res[0],&res[res.size()]);
    cout<<res;
    return 0;
}