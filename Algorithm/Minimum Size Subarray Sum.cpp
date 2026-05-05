#include <bits/stdc++.h>
using namespace std;

vector<int> subArrayWithSum(vector<int> arr, int target)
{
    int n = arr.size();

    int start = 0;
    int windowSum = 0;

    for(int end = 0; end < n; end++)
    {
        windowSum += arr[end];

        while(windowSum > target && start <= end)
        {
            windowSum -= arr[start];
            start++;
        }

        if(windowSum == target)
        {
            return vector<int>(arr.begin()+start, arr.begin()+end+1);
        }
    }

    return {};
}

int main()
{
    int s, n;
    cin >> s >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];

    vector<int> res = subArrayWithSum(arr, s);

    for(int x : res)
        cout << x << " ";
}