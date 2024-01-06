#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ='abedfs';
    // s.substr(index , length);
    cout<<s.substr(2,3)<<endl;// prints "bed"

    string str;
    cout<<"enter the string";
    getline(cin,str);
    int n = str.length();
    cout<<str.substr(n/2);
}