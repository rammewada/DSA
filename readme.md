## 1. Check if a given string is palindrome or not

## 2. Count number of vowels, consonants, spaces in String 

```c++
// Example 1:
// Input: string str=”Take u forward is Awesome”
// Output:
// Vowels: 10
// Consonants: 11
// White spaces: 4
// Explanation:

#include<bits/stdc++.h>

using namespace std;

int main (){
   string str= "Take u forward is Awesome";
   int n=str.size();

   int vowels = 0;
   int consonants = 0;
   int white_spaces = 0;
   for(int i=0;i<n;i++){
       str[i]=tolower(str[i]);
   }
   for(int i=0;i<n;i++){
       if(str[i]==32){
           white_spaces++;
       }
       else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
           vowels++;
       }
       else{
           consonants++;
       }
   }

  cout<<"Vowels : "<<vowels<<endl;
  cout<<"consonants : "<<consonants<<endl;
  cout<<"White Space : "<<white_spaces;

    return 0;
}
```

## 3. Find the ASCII value of a character

```c++
int   ascii(char cha){
   return int(cha);
}

int main (){
  char ch='Z';



  cout<<int(ch);

   return 0;
}
```

## 4. Remove all vowels from the string

```c++
string RemoveAllVowel (string s){
    string newStr="";
    int n=s.size();
    for(int j=0;j<n;j++){
        s[j]=tolower(s[j]);
    }

    for(int i=0;i<n;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' ){
            newStr+=s[i];
        }
    }
    return newStr;
}
```

## 5. Remove spaces from a string

```c++

```

## 6. Remove characters from a string except alphabets

```c++
#include<bits/stdc++.h>

using namespace std;

string FilterAlphabat (string s){
    string newStr="";
    int n=s.size();

    for(int i=0;i<n;i++){
        // if(s[i]>=65 && s[i]<=90 || s[i] >=95 && s[i] <=122   ){
        if(s[i]>='a' && s[i]<='z' || s[i] >='A' && s[i] <='Z'   ){
            newStr+=s[i];
        }
    }
    return newStr;
}

int main (){

   cout<<FilterAlphabat("take12% *&u ^$#forward");
    return 0;
}
```

## 7. Reverse a String

```c++
#include<bits/stdc++.h>

using namespace std;

void reverse (string &s){
    int n=s.size();
    int l=0, r=n-1;

    while(l<=r){
        swap(s[l],s[r]);
        l++;
        r--;
    }

}

int main (){
   string s="CAN WE REVERS THIS WORD";
  reverse(s);
    // reverse(&s[0],&s[s.size()]);
   cout<<s;

    return 0;
}
```

## 8.Remove brackets from an algebraic expression 
```c++
Same As Problem Number -
## 4. Remove all vowels from the string
```

## 9. Sum of the numbers in a String 
```C++


#include<bits/stdc++.h>

using namespace std;


// Input :  string = "123xyz"
// Output :  123
// Explanation :  The only number is 123, so the sum = 123

// Input :  string = "1xyz23"
// Output :  24
// Explanation :  Numbers are 1 and 23, sum = 24

//1x1;
--> First Way
int SumOfNumber (string &s){ 
    int n=s.size();
     int sum=0;
     int start=0;
     int end=0;
     
     for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            start = i;
            end=i;
            while(end<n && s[end]>=48 && s[end]<=57){
                end++;
            }
            string subString = s.substr(start, end-start);
            sum+=stoi(subString);
            i=end-1;
        } 
     }
 return sum;
} 

int main (){
   string s="1xyz23";
   cout<<SumOfNumber(s);;
    
    return 0;
}


-> Second Way
int SumofNumberByTempString(string &s){
    string temp="";
    int sum=0;
    for(auto c:s){
        if(isdigit(c)){
            temp+=c;
        }
        else{
            if(!temp.empty()){
                sum+=stoi(temp);
                temp="";
            }
        }
    }
    if(!temp.empty()){
        sum+=stoi(temp);
    }
    return sum;
}


```
## 10. 
Capitalize first and last character of each word
```c++
#include<bits/stdc++.h>

using namespace std;

//  Input: str = "take u forward is awesome"
// Output: “TakE U ForwarD IS AwesomE”

void capitlized(string &s){
    int start=-1,end=0;
    for(int i=0;i<s.size();i++){
        if(start==-1 && s[i]!=32){
            start=i;
        }
        if(s[i]!=32){
            end=i;
        }else{
            
            s[start]=toupper(s[start]);
            s[end]=toupper(s[end]);
            start = -1;
        }
        
    }
    if(start!=-1){
          s[start]=toupper(s[start]);
            s[end]=toupper(s[end]);
    }
}

int main (){
    string s="take u forward is awesome";
    capitlized(s);
    cout<<s;
    
    return 0;
}
```
Calculate frequency of characters in a string 
Find Non-repeating characters of a String
Check if two strings are anagram of each other 

Count common sub-sequence in two strings 

Check if two strings match where one string contains wildcard characters
Return maximum occurring character in the input string
Remove all duplicates from the input string.
Print all the duplicates in the input string.
Remove characters from first string present in the second string
Change every letter with the next lexicographic alphabet in the given string
Write a program to find the largest word in a given string.
Write a program to sort characters in a string
Count number of words in a given string
Write a program to find a word in a given string which has the highest number of repeated letters
Change case of each character in a string
Concatenate one string to another
Write a program to find a substring within a string. If found display its starting position
Reverse words in a string
