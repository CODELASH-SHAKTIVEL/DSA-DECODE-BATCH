// MERGE SORT ARRAY

// #hint -> 3 pointer

#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> arr3(m + n);
    int i = 0, j = 0, k = 0; // arr1 , arr2 , arr3
    while (i <= n && j <= m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else // arr2[j]<arr1[i]
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++; // returntensis which means k++ is there in con1 & con2
    }
  
    // *****************************************************************//
    // for remaining CASE TEST 2 
    if (i == n)
    {
        while (j <= m - 1)
        { // arr1 ke saare element utha chucka hoon
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        if (j == m)
        {
            while (i <= n - 1)
            {
                arr3[k] = arr1[i];
                k++;
                i++;
            }
        }
    }
    return arr3;
}

 // *****************************************************************************//

int main()
{
    vector<int> arr1;// 0,0,0,0 simple solution is dont give size to vector 
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(6);
    for (int i = 0; i < arr1.size() ; i++)
    {
        cout<<arr1[i]<<" ";
    }
   cout<<endl;

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for (int i = 0; i < arr2.size() ; i++)
    {
        cout<<arr2[i]<<" ";
    }
   cout<<endl;

    // calling the function 
    vector<int> v = merge(arr1, arr2);
    // return arr3 and print it an loop 
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}


// MERGE SORT WITHOUT USING ARR3