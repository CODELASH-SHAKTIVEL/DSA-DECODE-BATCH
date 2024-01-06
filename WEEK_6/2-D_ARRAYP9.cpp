// QUESTION : GIVEN AN INTEGER 'NUMROWS' , GENETRATE PASCAL'S TRIANGLE [LEETCODE 118]

// OUTPUT: 1 
//         1  1
//         1  2  1 
//         1  3  3  1 

// METHOD 1:
// iCj = i!/j!*(i-j)!

// METHOD 2:
// nC(r+1) = nCr(n-r/r+1)

// METHOD 3:
// Using the formula for binomial coefficient, we can generate Pascal's triangle using a loop.

#include<iostream>
#include<vector>
using namespace std;
vector<vector <int> > pascal(int NumRows){
     int m = NumRows;
    vector<vector <int> > v;
    for (int i=0; i<m ; i++)
    {
       vector<int>  a(i+1,0); // for segmentation fault intialise with a(i+1 ,0)
       v.push_back(a);
    }


     // GENERATE THE PASCAL TRIANGLE 
     for (int i = 0; i < m; i++)
     {
        for (int j= 0; j<= i; j++)
        {
           if((j==0 || j == i)){
           v[i][j] = 1;
           }
           else{
            v[i][j]= v[i-1][j] + v[i-1][j-1];
            // v[2][1] = v[1][1]+ v[1][0] = 2
           }
        }
     }
     return v;
}

int main(){
        
    vector<vector <int> > v = pascal(5);
     // PRINT THE PASCAL TRIANGLE 
     for (int i = 0; i<v.size(); i++)
     {
        for (int  j = 0; j<=i; j++)
        {
            cout<<v[i][j]<<" ";
        }
     cout<<endl;
     }
    return 0;
}

