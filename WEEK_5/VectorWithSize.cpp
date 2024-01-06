//  ***************** VECTOR ***************** //


// VECTOR & IT'S SIZE
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v (5, 7) ; // initial size = 5 , each element is set to 7
//     cout<<v[2];
// }


// ********************************************************************************************************************//


// INPUT & OUTPUT IN VECTOR
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"ENTER THE SIZE OF THE ARRAY";
//     cin>>n;
//     vector<int> v;

//     for (int i = 0; i<n; i++)
//     {
//         int x; // external variable
//         cin>>x;
//         v.push_back(x);
//     }

//     for (int i=0 ; i<n ; i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }


//***********************************************************************************************************************//

// VECTOR  & SORTING 
#include<iostream>
#include<vector>
#include<algorithm> // important header file for sorting 
using namespace std;
int main(){
    vector<int>  v ;
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);
    for (int i = 0; i <v.size(); i++)
    {
     cout<<v[i]<<" "; 
    }
    cout<<endl;
    sort(v.begin(),v.end());
    // sort(begin(arr),end(arr)); for array sorting
     for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" "; 
    }
    cout<<endl;
}
