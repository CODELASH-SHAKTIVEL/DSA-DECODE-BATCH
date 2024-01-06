// *************************** PASSING ARRAY TO FUNCTION **************************

// #include<iostream>
// using namespace std;
// void display(int a[], int size ){// size will be given . int *a 
//          for (int i=0; i<=size-1; i++)
//          {
//             cout<<a[i]<<" "; // whole array output
//          }
//          cout<<endl;
//          return;
// }

// void change (int b[] , int size ){ // int *b is valid 
//     b[0]=23;
// }

// int main (){
//         int arr[5] ={1 ,4 ,5 ,6 ,7};
//         int size = sizeof(arr)/sizeof(arr[0]) ;
//         cout<<size<<endl;
//         display(arr, size ); //addresss is passing through the function
//         change(arr , size );
//         display(arr , size);
// }




// ****************** POINTER AND ARRAY *************************

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]= {4,2,5,3,5,};
//     int *ptr = arr;//giving address to ptr
    // cout<<ptr<<endl;

     // BASIC METHOD OF PRINTING  ARRAY
    // for (int  i = 0; i <=4; i++)
    // {
    //     cout<<ptr[i]<<" ";
    //     cout<<i[ptr]<<" ";
    //     cout<<i[arr]<<" ";
    // }
    // cout<<endl;
 

    // // update the value in 0 arr
    // *ptr = 8 ; // ptr[0] = 8
    // cout<<ptr<<endl;
    // for (int  i = 0; i <=4; i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<endl;4


    // another method 
    // *ptr = 8 ; // ptr[0] = 8;
    // ptr++;
    // *ptr = 9;
    // ptr--;
    // for (int i = 0; i <=4; i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<endl;


    // ANOTHER METHOD 
    // *ptr = 8 ; // ptr[0] = 8;
    // ptr++;  // ptr is pointing to 2nd element 
    // *ptr = 9;
    // ptr--;  // ptr is pointing to 1st element 
    //     for (int i = 0; i <=4; i++)
    //     {
    //         cout<<*ptr<<" "; // pointing to zero    element 
    //         ptr++;
    //     }
    //     ptr = arr; // important to do because last ptr++ will be not be pointing to arr[0] ,so again initilize it .
    // }










































