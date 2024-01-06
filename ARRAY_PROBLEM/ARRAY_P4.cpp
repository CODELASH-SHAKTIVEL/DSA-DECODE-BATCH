// FIND THE NEXT PERMUTATIONS IN ARRAY

// NOTE :- IF NOT POSSIBLE THEN PRINT THE SORTED ORDER IN ASCENDIND ORDER

// LEETCODE 1 , 2 , 3


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int> &nums){
    int n = nums.size();

    // 1] finding pivot index 
    int idx = -1;
    for (int i = n-2; i>=0 ; i++)
    {
        if(nums[i]<nums[i+1]) {
            idx = i;
            break;
        }
    }
    if (idx==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }

    // 2] sorting/reverse after pivot
    reverse(nums.begin()+idx+1,nums.end());


    // 3]Finding the just greater element than idx
    int j = -1;
    for (int i = idx; i <n; i++)
    {
        if(nums[i]>nums[idx]) {
                    j = i;
                    break;
                }
    }


    // 4] swapping idx & j
    int temp =nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
}