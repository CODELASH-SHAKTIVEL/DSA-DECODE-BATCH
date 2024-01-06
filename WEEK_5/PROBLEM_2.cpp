// FIND THE DOUBLET IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE X.(LEETCODE PROBLEM 1 )

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 1 3 2 4 3 4 1 6
    vector<int> v;
    int x;
    cout << "enter target";
    cin >> x;
    int n;
    cout << "enter array size ";
    cin >> n;

    cout << "Enter array element: ";

    //Input 
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }


    // comparing first a[0] to a[1]  to a[last] 
    // we have travel the loop two times by keep one first node in one hand & comparing to others 
    for (int i = 0; i <=v.size()-1; i++)
    {
        for (int j = i+1; j <=v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}
