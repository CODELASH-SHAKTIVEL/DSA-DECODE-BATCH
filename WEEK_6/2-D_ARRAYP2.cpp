// WAP TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER AND STORE IT IN A NEW MATRIX
// MATRIX TRANSPOSE = MATRIX TRANSPOSE

#include<iostream>
using namespace std ;
void transpose (int arr[][3],  int t[][3]){
    // store the transpose 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[i][j] = arr[j][i];
        }
        cout << endl;
    }
    // printing  the transpose 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int t[3][3];

    transpose( arr,  t);


    // // store the transpose 
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         t[i][j] = arr[j][i];
    //     }
    //     cout << endl;
    // }
    // // printing  the transpose 
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    return 0;
}