// Ques : Given string consisting of lowercase 
// English alphabets. Print the character that is 
// occurring most number of times.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "raghav";
    vector<int> arr (26 , 0);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for (int i = 0; i <26; i++)
    {
        if(arr[i] >mx){
            mx=arr[i];
        }
    }
    for (int i = 0 ; i<26 ; i++){
        if (arr[i]==mx)
        {
           int ascii = i + 97;
           char ch = (char)ascii;
           cout<<"Character: " << ch << "\tFrequency: " << mx << endl;
        }
        
    } 
}