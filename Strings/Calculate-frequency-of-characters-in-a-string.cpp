
#include <iostream>
#include <map>
#include <string>

using namespace std;

void frequencyOfEachCharector(string s)
{
    map<char, int> mpp;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }

    for (auto x : mpp)
    {
        cout << x.first << x.second << " ";
    }
}

int main()
{
    string s;
    getline(cin, s, ' ');
    frequencyOfEachCharector(s);

    return 0;
}