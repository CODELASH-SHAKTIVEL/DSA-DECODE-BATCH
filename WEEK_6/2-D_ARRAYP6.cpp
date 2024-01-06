// WAP THE GIVEN MATRIX IN WAVE FORM


#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the row of 1st matrix ";
    cin >> m;

    int n;
    cout << "Enter the row of 2nd matrix ";
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
    cout << endl;

   // WAVE PRINT 
   for (int i = 0; i <m; i++)
   {
     if (i%2==0) // hint : odd and even 
     {
        for (int j = 0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        
     } 
     else{
        for (int j = (n-1); j>=0; j--){
            cout << arr[i][j] << " ";
        }
     }
       
       // column wise print 
       for (int j = 0; j <n; i++)
       {
         for (int i = 0; i <m; i++)
         {
           cout<<arr[i][j]<<" ";
         }
       }

   }
   
    























}