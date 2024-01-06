// VERY FAMOUS QUESTIONS
// REVISE IT VERY TIME 
// TRAPPING RAIN WATER
// LEETCODE-42

// STEP 1] PREV.GREATEST ELEMENT & NEXT GREATEST ELEMENT
// STEP 2]  HEIGHTS [0,1,0,2,1,0,1,3,2,1,2,1]
// STEP 3]  PREVS   [-1,0,1,1,2,2,2,2,3,3,3,3]
// STEP 4]  NEXT    [3,3,3,3,3,3,3,2,2,2,1,-1]
// STEP 5]  NEW ARR [-1,0,1,1,2,2,2,2,2,2,1,-1]
// STEP 6]  FORMULA [HEIGHTS - NEW ARR]

#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();

    // prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }

    // Next greatest element array
    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
            max = height[i];
    }

    // minimum array
    // int mini[n];
    // for (int i = 0; i < n; i++)
    // {
    //     mini[i] = min(prev[i], next[i]);
    // }


    // minimum array without any extra array
    for (int i = 0; i < n; i++)
    {
        prev[i] = min(prev[i], next[i]);  // overwrite the prevous one 
    }


    // calculating water
    int water = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (height[i] < prev[i]) // for extra array height<prev
        {
            water += (prev[i] - height[i]);
        }
    }
    cout<<water<<endl;
    return water;
}


int main (){
    vector<int> height;
    height.push_back(0); //[0,1,0,2,1,0,1,3,2,1,2,1]
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    for (int i = 0; i < height.size(); i++)
    {
       cout<<height[i]<<" ";
    }
    cout<<endl;
    trap(height);
    for (int i = 0; i < height.size(); i++)
    {
       cout<<height[i]<<" ";
    }
    // cout<<water<<endl;
    return 0;
}
