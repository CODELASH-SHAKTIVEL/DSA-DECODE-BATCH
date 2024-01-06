#include<iostream>
#include<vector>
#include<string.h>
#include <istream>
using namespace std;
int main(){

    // METHOD 1:
    // char str[] = {'a','b','c'};
    // for(int i = 0 ; i<5;i++){
    //     cout<<str[i]<<" ";
    // }
   
   
    // METHOD 2: very very important 
    string str = "harry is a good boy";
    cout<<str<<endl; // now it will print the statment with spaces 
    // but not useful when we are taking the input 
    // because it will not count the spaces 
    string name;
    getline(cin,name);
    cout<<name<<" ";
}