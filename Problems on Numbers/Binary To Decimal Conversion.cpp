#include<bits/stdc++.h>

using namespace std;

//Input - 10101001
//Output - 169

int BinaryToDecimal(int num){
    int temp = num;
    int decimalNumber=0; 
    int  base=0;
    while(temp){
        int rem=temp%10;
        temp=temp/10;

        decimalNumber+=rem*pow(2,base);
        base++;
    }
    return decimalNumber;
}



int main () {
    
    int number;
    cin>>number;
    cout<<BinaryToDecimal(number);
  return 0;
}