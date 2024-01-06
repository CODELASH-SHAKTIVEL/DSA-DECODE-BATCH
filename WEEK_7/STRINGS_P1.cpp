#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str = {"raghav"};
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u') {
            count++;
        }
    }
    cout << count;

    // IN C++ STRINGS ARE MUTABLE
    string str1 = "raghav";
    for (int i = 0; i < str1.length(); i++) {
        if (i % 2 == 0) {
            str1[i] = 'a';
        }
    }
    cout << str1;

    // BUILD-IN FUNCTION
    int length = str1.length();
    str1.push_back('o');
    str1.push_back('i');
    str1.push_back('j');
    str1.pop_back();
    cout << str1 << " ";

    // Append 
    string s ='a';
    string t = 'b';
    s += t + ", c, d.";   // concatenate two strings and add a comma after

    // REVERSE 
    string s = "abcefdc";
    cout<<s<<endl;
    reverse(s.begin()+2, s.end()-1);
    return 0;

    // 
}
