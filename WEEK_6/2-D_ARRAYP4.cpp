// WAP TO ROTATE THE MATRIX BY 90 DEGREE CLOCKWISE ( LEETCODE 48)
// https://leetcode.com/problems/rotate-image/

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for (int i = 0; i <= (3 - 1); i++)
    {
        for (int j = 0; j <= (3 - 1); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i <= (3 - 1); i++)
    {
        for (int j = 0; j <= (3 - 1); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // store the transpose in the same matrix
    for (int i = 0; i <= (3 - 1); i++)
    {
        for (int j = i + 1; j <= (3 - 1); j++) // hint and impt is the loop
        {
            // swapping of  i , j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            cout << endl;
        }
    }
    cout << endl;

    for (int i = 0; i <= (3 - 1); i++)
    {
        for (int j = 0; j <= (3 - 1); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // reverse the given matrix
    for (int k = 0; k <= 3; k++)
    {
        int i = 0;
        int j = 3 - 1;
        while (i < j)
        {
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
        cout << endl;
    }

    for (int i = 0; i <= (3 - 1); i++)
    {
        for (int j = 0; j <= (3 - 1); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}