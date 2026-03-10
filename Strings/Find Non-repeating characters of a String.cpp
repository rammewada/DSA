#include <bits/stdc++.h>

using namespace std;

void printNonRepeatingChar(string s)
{
    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    for (auto x : mpp)
    {

        if (x.second == 1)
        {
            cout << x.first << " ";
        }
    }
}

int main()
{
    string s;
    getline(cin, s);

    printNonRepeatingChar(s);

    return 0;
}

// void printNonRepeatingChar(string s, int freq[26],int size){
//     int n=s.size();

//     for(int i=0;i<n;i++){
//         if(s[i]==' ') continue;
//          freq[s[i]-'a']++;
//     }

//     for(int i=0; i<size; i++){
//         if(freq[i]==1){
//             cout<<char(i+'a')<<" ";
//         }
//     }
// }
// int main (){
//     string s;
//     getline(cin,s);

//       int freq[26]={0};
//    int size=sizeof(freq)/sizeof(freq[0]);
//     printNonRepeatingChar(s, freq,size);

//     return 0;
// }