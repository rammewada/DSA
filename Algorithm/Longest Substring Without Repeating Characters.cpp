#include <iostream>
#include <set>

using namespace std;

string findTheLogestSubString(string str)
{
    string result = "";
    string maxLength = "";
    set<char> st;
    int n = str.size();

    if (n == 1)
        return str;

    for (int i = 0; i < n; i++)
    {
        if (!st.count(str[i]))
        {
            result += str[i];
            st.insert(str[i]);
        }
        else
        {
            if (result.size() > maxLength.size())
                maxLength = result;

            result = "";
            st.clear();
            result += str[i];
            st.insert(str[i]);
        }
    }

    if (result.size() > maxLength.size())
        maxLength = result;

    return maxLength;
}

int main()
{

    string str;
    cin >> str;

    cout << findTheLogestSubString(str);
}
