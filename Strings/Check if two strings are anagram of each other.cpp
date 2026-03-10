#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << "false";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            continue;
        else
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";

    return 0;
};
