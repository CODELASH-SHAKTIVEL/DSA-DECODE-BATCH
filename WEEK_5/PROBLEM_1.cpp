// FIND THE LAST OCCURRENCE OF X IN THE ARRAY

// EXPLAIN
//  V  1,2,3,4,45,1,4,5,6
// count x = 1 // increment it 
// int idx = 1 // compare it 

//********************************************//

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(2);
    v.push_back(6); // last occurences
    int x ;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH :";
    cin>>x;

    //*****************************************//
    int idx = -1;
    // last occurences searching it from first to last loop 
     for (int i = 0; i <v.size(); i++)
     {
        if(v[i]==x) idx=i; // increment the idx
     }
     cout<<idx<<endl;


     //******************************************//
     // last occurence searching it from last  to first loop
     for (int i = v.size()-1; i<0; i--) // more optimize way of doing learn the importance of break statment 
     {
        if(v[i]==x) idx=i; // increment the idx
        break;
     }
     cout<<idx<<endl;


     // ***************************************//
     // first occurences from first to last loop//
     int first = -1;
   for (int i = 0; i<v.size(); i++) // first occurrences
   {
    if(v[i]==x) {
        first=i; // increment the idx
        break; // break out of loop after first occurrence
    }
   }
   cout<<first<<endl;
}
