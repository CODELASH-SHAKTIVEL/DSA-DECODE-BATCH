// WRITE A PROGRAM TO COPY THE CONTENT OF ONE ARRAY INTO ANOTHER IN THE REVERSE ORDER

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for (int i = 0; i<a.size(); i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(30);
    v1.push_back(41);
    v1.push_back(35);
    v1.push_back(36);
    v1.push_back(37);
    v1.push_back(38);
    v1.push_back(39);
    display(v1);

   vector<int> v2(v1.size());
   for (int i = 0; i <v2.size(); i++)
   {
    //  i+j = size - 1
    int j  = v1.size()-1-i;
    v2[i]= v1[j];
   }
  display(v2);
}


