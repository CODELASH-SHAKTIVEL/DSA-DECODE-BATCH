// ROTATE THE ARRAY

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

       // Rotate the Array
        int k = 2;
        int n = v.size(); // n = 7
        // if k is given infinite number or big number
        if(k>n) k = k % n ;
        reversePart(0, n-k-1 , v);
        reversePart(n-k, n-1 , v);
        reversePart(0, n-1 , v);
        display(v);
        cout<<endl;

}

