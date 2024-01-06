// TWO DIMENSIONAL ARRAY

// 2D arrays are commonly used to store 2D graphics
// TRANSVERSAL THROUGH ARRAY 


#include <iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3] ;
    // Input for 2-D array
    for (int i = 0; i <= 2; i++)
    {
        for (int  j = 0; j <=2; j++)
        {
          cin>>arr[i][j];
        }
    cout<<endl;
    }

    // Output for 2-D array
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    cout<<endl;
    }
}