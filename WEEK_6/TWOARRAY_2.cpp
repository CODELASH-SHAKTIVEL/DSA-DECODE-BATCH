// ************************************ TWO D-VECTOR[ARRAY] EXPLAINATION ****************************

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> v1;// if size is given then [3] them it represents as 000123
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);

//     vector <int> v2;
//     v2.push_back(4);
//     v2.push_back(5);

//     vector <int> v3;
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
//     v3.push_back(11);
//     v3.push_back(13);

//     vector < vector <int> > v;
//     v.push_back(v1);// push only vector like one D-array
//     v.push_back(v2);
//     v.push_back(v3);

//    cout<<v[1][0];
// }

// ******************* TWO D-VECTOR [ARRAY] INTO FUNCTION  *************

#include <iostream>
#include <vector>
using namespace std;

void changeOneDarray(int a[])
{
    a[0] = 65;
}


void changetwoDarray(int arr[3][3])
{ // size of column and row is compulsory
    arr[0][0] = 100;
}


void Change2Darray(vector<vector<int>> &v) // no need of size mentioning
{
    v[1][0] = 100;
}


int main()
{
    // ONE D-ARRAY
    int a[3] = {1, 2, 3};
    cout << a[0] << endl;
    changeOneDarray(a);
    cout << a[0] << endl;

    // Two D-ARRAY
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};
    cout << arr[0][0] << endl;
    changetwoDarray(arr);
    cout << arr[0][0] << endl;

    // VECTOR 2-D ARRAY
    vector<int> v1; // if size is given then [3] them it represents as 0 0 0 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(13);

    vector<vector<int>> v;
    v.push_back(v1); // push only vector like one D-array
    v.push_back(v2);
    v.push_back(v3);

    cout << v[1][0] << endl;
    Change2Darray(v);
    cout << v[1][0] << endl;
}