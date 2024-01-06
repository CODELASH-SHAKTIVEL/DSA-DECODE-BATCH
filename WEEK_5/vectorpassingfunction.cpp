// VECTOR ARE PASSED BY VALUE. EACH TIME YOU PASS , NEW VECTOR IS CREATED.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void change(vector<int> a){
//     a[0]=100; // new array -> 100 
// }
// int main(){
//     vector<int> v;
//     v.push_back(30);
//     v.push_back(41);
//     v.push_back(35);
//     v.push_back(36);
//     v.push_back(37);
//     v.push_back(38);
//     v.push_back(39);
//     for (int i = 0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v); // no change 
//     for (int i = 0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }
 
//************************************************************************************//
// PASSING BY REFERENCES
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> &a){
    a[0]=100; // new array -> 100 
}
int main(){
    vector<int> v;
    v.push_back(30);
    v.push_back(41);
    v.push_back(35);
    v.push_back(36);
    v.push_back(37);
    v.push_back(38);
    v.push_back(39);
    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v); // no change 
    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}