// MOVE ALL THE NEGATIVE NUMBER TO BEGINNING AND POSTIVE TO END WITH CONSTANT EXTRA SPACE. 

// 1 -2 3 -4 -5  6 8

#include<iostream>
#include<vector>
using namespace std;
int sortNegative (vector<int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
      if (v[i]<0)
      {
        i++;
      }
      else{
        swap(v[i] , v[j]);
        j--;
      }
    }

}

int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(-2);
  v.push_back(3);
  v.push_back(-4);
  v.push_back(-5);
  v.push_back(6);
  v.push_back(8);
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sortNegative(v);
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}
