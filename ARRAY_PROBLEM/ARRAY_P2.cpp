// Sort the array of 0's , 1's and 2's

// Dutch flag Algorithm-> 3 pointer algorithm

// Leetcode 75

#include <iostream>
#include <vector>
using namespace std;
// METHOD NO -1
void sortColor(vector<int> &nums)
{
    // two pass solution
    int n = nums.size();
    int noz = 0;
    int noo = 0;
    int notw = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            noz++;
        }
        else if (nums[i] == 1)
        {
            noo++; // fix: increment noo for 1s
        }
        else
        {
            notw++;
        }
    }
    // fill the array
    // [2,0,2,1,1,0]
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
        {
            nums[i] = 0;
        }
        else if (i < (noz + noo))
        {
            nums[i] = 1;
        }
        else
        {
            nums[i] = 2;
        }
    }
    return;
}
// ONE PASS METHOD -> DUTCH FLAG ALGORITHM
void sortColorDutch(vector<int> &nums)
{
  int low = 0;
  int  mid = 0;
  int high = nums.size() - 1;
   // 1] mid ke baare me socha
   // 2] 0 to lo-1 -> 0 , 
   while(mid<=high){
    if (nums[mid] == 2){
         int temp = nums[mid];
         nums[mid] = nums[high];
         nums[high] = temp;
         high--;
    }
    else if (nums[mid] == 0){
       int temp = nums[mid];
       nums[mid] = nums[low]; // fix: swap with instead of high
       nums[low] = temp;
       low++;
       mid++;
    }
    else{
        mid++;
    }
   }
    return;
}
  
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sortColor(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    sortColorDutch(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
