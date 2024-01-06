// WAP TO PRINT THE PRINT THE MULTIPLICATION OF TWO MATRICS GIVEN BY THE USER

#include <iostream>
#include <vector>
using namespace std;
void multiplay(int a[][n], int b[][m] ,  int m ,int n , int p , int q) {
     int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multiply
                res[i][j] = 0;
                // res[i][j] = a[i][0]*b[0][j] +a[i][1]*b[1][i] + ...
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    // else
    // {
    //     cout << "The matrics are not  compatiable";
    // }
}

int main()
{
    int m;
    cout << "Enter the row of 1st matrix ";
    cin >> m;

    int n;
    cout << "Enter the col of 1st matrix ";
    cin >> n;

    int p;
    cout << "Enter the 1st row of   2nd matrix ";
    cin >> p;

    int q;
    cout << "Enter the 2nd colums  2nd   matrix ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout << "Enter element of 1st matrix: ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "Enter element of 2nd matrix: ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

         multiplay(a , b , m , n , p ,q )
        // RESULTANT MATRIX
    //     int res[m][q];
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < q; j++)
    //         {
    //             // multiply
    //             res[i][j] = 0;
    //             // res[i][j] = a[i][0]*b[0][j] +a[i][1]*b[1][i] + ...
    //             for (int k = 0; k < p; k++)
    //             {
    //                 res[i][j] += a[i][k] * b[k][j];
    //             }
    //         }
    //     }
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < q; j++)
    //         {
    //             cout << res[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    // else
    // {
    //     cout << "The matrics are not  compatiable";
    }
}
