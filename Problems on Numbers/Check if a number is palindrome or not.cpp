#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;

int main(){
    int num;
    int revNum=-1;
    cin>>num;
     
    int temp=num;

    while(temp){
        int rem=temp%10;
        temp=temp/10;

        if(revNum==-1){
            revNum=rem;
        }
        else{
            revNum=(revNum*10)+rem;
        }
    }
     if(revNum==num){
        cout<<"True";
     }
     else{
        cout<<"False";
     }
    return 0;
}