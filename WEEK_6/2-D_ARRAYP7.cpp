// WAP TO PRINT THE MATRIX IN SPIRAL FORM 

#include<iostream>
#include<vector>
using namespace std;
int main (){
    int m;
    cout << "Enter the row of 1st matrix ";
    cin >> m;

    int n;
    cout << "Enter the colums of 2nd matrix ";
    cin >> n;

    int arr[m][n];
    for (int i = 0; i <= (m-1); i++)
    {
        for (int j = 0; j <= (n-1); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;


    for (int i = 0; i <= (m-1); i++)
    {
        for (int j = 0; j <= (n-1); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // SPIRAL
    int minr = 0 , minc = 0 ;
    int maxr = m-1  , maxc = n-1;
    int tne = n*m;
    int count = 0;
    while (minr<=maxr && minc<=maxc)
    {
        // RIGHT
        for (int j = minc; j<=maxc && count<tne; j++)
        {
           cout<<arr[minr][j]<<" ";
           count++;
        }
        minr++;

        // if (minr<=maxr || minc<=maxc) break;


        //DOWN
        for (int i = minr; i <= maxr && count<tne; i++)
        {
           cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;

        // if (minr<=maxr || minc<=maxc) break;  

        //LEFT
        for (int j = maxc; j>=minc && count<tne; j--)
        {
           cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;

        // if (minr<=maxr || minc<=maxc) break;  

        //UP
        for (int i = maxr; i>=minr && count<tne; i--)
        {
           cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0;

    
 // LAST OUTPUT
// 1 2 3 6 9 8 7 4 5
}
