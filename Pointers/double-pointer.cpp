#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int** arr= new int*[n];

     int j;
     cin>>j;
    for(int i=0; i<n;i++){
        int* sa=new int[j];
        arr[i]=sa;
    }

    for(int i=0;i<n;i++){
        for(int k=0;k<j;k++){
            arr[i][k]=i+k;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete [] arr[i];
    } 
    delete [] arr;
    return 0;
}             