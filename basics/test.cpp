#include<iostream>
#include<unordered_map>
using namespace std;

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

 

int main() {
    int arr[] = {2,7,11,15};
    int target = 9;
    
 unordered_map<int,int> mpp; 

 
 for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){ 
    // mpp.insert({arr[i],i});
    mpp[arr[i]]=i;
 }
    
 for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
   int remain = abs(target - arr[i]); 
   if(mpp.count(remain) && mpp[remain]!=i){
        cout<<i<<" "<<mpp[remain];
        break;
   }
}
    return 0;
}