#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s1, s2;
    int startIndex = -1;
    cin >> s1 >> s2;
    
    //SORT METHOD
    // int index=s1.find(s2); return -1 if not found;
    // cout<<index;

    if (s1.size() < s2.size())
    {
        cout << startIndex;
        return 0;
    }

    for (int i = 0; i < s1.size(); i++)
    {

        if (s1[i] == s2[0])
        {
            int s1_index = i;
            int s2_index = 0;
            while (s1_index < s1.size() && s2_index < s2.size())
            {
                if (s1[s1_index] == s2[s2_index])
                {

                    if (s2_index == s2.size() - 1)
                    {
                        startIndex = i;
                        break;
                    }
                    s1_index++;
                    s2_index++;
                }
                else
                {

                    break;
                }
            }
        }
        if(startIndex!=-1) break;
    }

    cout << startIndex;

    return 0;
}