// ********************* VECTOR ************************


// VECTOR ->> VECTOR IS REPLACEMENT OF ARRAY WHERE WE CAN  ADD / PUSH NEW ELEMENT IN ARRAY  
// VECTOR ->> VECTOR IS DYNAMIC ARRAY

// ***********************************************************//

// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     // int arr[5];
//     vector<int> v; // you not mention the size 
//     // INSERTING / INPUT DO NOT USE []
//     // V[1]= 23; ERROR THROW DONT USE IT
//     v.push_back(6);
//     cout<<v.size()<<" ";
//     v.push_back(1);
//     cout<<v.size()<<" ";
//     v.push_back(4);
//     cout<<v.size()<<" ";
//     v.push_back(7);
//     cout<<v.size()<<" ";
//     v.push_back(9);
//     cout<<v.size()<<" ";

// cout<<endl;

//     //  capacity
//     v.push_back(6);
//     cout<<v.capacity()<<" ";
//     v.push_back(1);
//     cout<<v.capacity()<<" ";
//     v.push_back(4);
//     cout<<v.capacity()<<" ";
//     v.push_back(7);
//     cout<<v.capacity()<<" ";
//     v.push_back(9);
//     cout<<v.capacity()<<" ";
     
// cout<<endl;

//     //     PRINTING OF VECTOR METHOD 1 
//     //   IF YOU WANT TO UPDATE /  ACCESS
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
//     cout<<v[4]<<" ";


//     // METHOD 2 OF PRINTING VECTOR
//     for (int i = 0; i<=v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }



//*****************************************************************************//


// pop_back
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v; //size capacity
//     v.push_back(5); // 1 1
//     v.push_back(4); // 2 2 
//     v.push_back(6); // 3 4
//     v.push_back(7); // 4 4 
//     v.push_back(8); // 5 8
//     v.push_back(1); // 6 8

//      for (int i = 0; i<v.size(); i++)
//      {
//          cout<<v[i]<<" ";
//      }

//      cout<<endl;

//      v.pop_back(); //  deletes the last element in the ARRAY
//      v.pop_back(); 

//      for (int i = 0; i <v.size(); i++)
//      {
//         cout<<v[i]<<" ";
//      }
// } 


// *********************************************************************************//

// Size  & capacity
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"size:"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl; // capacity will remain same 
}
