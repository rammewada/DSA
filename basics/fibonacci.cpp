#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// vector<int> printFibo(int n)
// {
//     vector<int> fibo = {0, 1};

//     if (n == 1)
//         return {0};
//     if (n == 2)
//         return fibo;

//     for (int i = 2; i < n; i++)
//     {
//         fibo.push_back(fibo[i - 1] + fibo[i - 2]);
//     }
//     return fibo;
// }

int nthfibonacciNumber(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;

    return nthfibonacciNumber(n - 1) + nthfibonacciNumber(n - 2);
}

 
int main()
{
    int n;
    cin>>n;
     
   
    
    cout<<nthfibonacciNumber(n);
     

    return 0;
}