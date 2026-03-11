#include<iostream>

using namespace std;

int main(){
 long long num=10240011830;

  string numString = to_string(num);

  for(int i=0;i<numString.size();i++){
    if(numString[i]=='0'){
        numString[i]='1';
    }
  }
  
 
  cout<<stoll(numString);

  return 0;

}