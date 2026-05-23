#include<iostream>

using namespace std;
int length(char input[]){
      if(input[0]=='\0') return 0;

      return 1+length(input+1);
} 

void removeX(char input[]){
if(input[0]=='\0') return;

if(input[0]!='x') return removeX(input+1);

else {
    int len=0;
    while(input[len]!='\0'){
        input[len] =input[len+1];
        len++;
    }
    return removeX(input);
}


}

int main (){

    char input[10]={'a','x','c','x','e','f','x','h','i'};
      
    removeX(input); 
    int i=0;
    
    while(input[i]!='\0'){

        cout<<input[i];
        i++;
    }

    return 0;
}