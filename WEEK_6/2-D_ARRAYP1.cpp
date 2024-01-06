// WRITE A PROGRAM TO STORE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX



 #include <iostream>
#include <vector>
using namespace std;

int main() {
    // roll number, marks
    // 4 students
    int arr[4][2];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // maximum number
    int max = arr[0][1];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum number: " << max << endl;
    return 0;
}
