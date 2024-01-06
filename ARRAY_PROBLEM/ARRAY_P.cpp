// Sort of 0' and 1'

#include<iostream>
#include<vector>
using namespace std;
// Two pass method ->01
 void sort01(vector<int> &v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < n ; i++)
    {
         if(v[i]==0) {
            noz++;
            }
         else  {
            noo++;
         }
    }
    //filling the array again in the noz & noo
    for (int i = 0; i<n; i++)
    {
        // noz = 3;
        if(i<noz) v[i] = 0;
        else v[i] =1;
    }
 }

 // Method 2 -> Two pointer
//  small problem will be araised in sorting 11001101
 void sort02(vector<int> &v){
  int n = v.size() ;
  int i = 0 ;
  int j = 0 ; 
  while(i<j){
     if(v[i]==0) i++;
     if(v[j]==1) j--;
     if(i<j) break;
     if(v[i]==0 && v[i]==1){
        swap(v[i],v[j]);
      i++;
     j--;
  }
  }
 }

int main(){
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  for (int i = 0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sort01(v);
  for (int i = 0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sort02(v);
  for (int i = 0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}