// WAP A PROGRAM TO REVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY 

// POINTER CAN BE USED

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for (int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
 
 int reversePart(int i , int j , vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
  
 }

int main(){
        vector<int> v;
        v.push_back(2);
        v.push_back(3);
        v.push_back(5);
        v.push_back(7);
        v.push_back(8);
        v.push_back(6);
        v.push_back(1);
        display(v);
        cout<<endl;
      
        // method 1 
        // int i = 0;
        // int j = v.size()-1;
        // while(i<=j)
        // {
        //       int temp = v[i];
        //       v[i]= v[j];
        //       v[j]= temp;
        //       i++;
        //       j--;
        // }
        // display(v);
        // cout<<endl;

         //  Method 2
        // for (int i = 0,j= v.size()-1; i<=j ;i++ ,j--)
        // {
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        // }
        // display(v);
        // cout<<endl;

        // METHOD 3 
        // reverse(v.begin(), v.end());
        // display(v);


         // METHOD 4 
        reversePart(0,4,v);
        display(v);
}





























