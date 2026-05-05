#include <bits/stdc++.h>

using namespace std;

int maxSumOfKElement(vector<int> arr, int k)
{
    int n = arr.size();

    int maxSum = 0;
    if (k > n)
    {
        return -1;
    }
    for (int i = 0; i < k; i++)
    {
        maxSum += arr.at(i);
    } 
    
    int windowSum=maxSum;
    for(int i=k;i<n;i++){
         windowSum=(windowSum+arr[i])-arr[i-k];

         maxSum=max(windowSum,maxSum);

    }
    return maxSum;
}

int main()
{
    int k;
    int n;
    vector<int> arr;
    cin >> k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << maxSumOfKElement(arr, k);

    return 0;
}