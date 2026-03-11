#include <iostream>

using namespace std;

int main()
{

    string str;
    getline(cin, str);
    int n = str.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        swap(str[l], str[r]);
        l++;
        r--;
    }
    cout << str;
    return 0;
}