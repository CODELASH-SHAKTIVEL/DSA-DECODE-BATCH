// WAP YOU ARE GIVEN A MATRIX / 2-D ARRAY OF SIZE (N*N) CHANGE THIS A MATRIX INTO ITS TRANSPOSE (WITH ONLY ONE MATRIX )

#include<iostream>
using namespace std ;

int main(){
    int arr[3][3];
    for (int i = 0; i <= (3-1); i++) {
        for (int j = 0; j <= (3-1); j++) {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i <= 3-1; i++) {
        for (int j = 0; j <= 3-1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    // store the transpose in the same matrix
   for (int i = 0; i <= 3-1; i++)
   {
    for (int  j = i+1 ; j <=3-1; j++) // hint and impt is the loop 
    {
        // swapping of  i , j and j,i
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    cout<<endl;
    }
   }
    // printing  the transpose 
    for (int i = 0; i <= 3-1; i++) {
        for (int j = 0; j <= 3-1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}