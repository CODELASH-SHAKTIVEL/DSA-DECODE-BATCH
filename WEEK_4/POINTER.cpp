 // POINTER 
// #include<iostream>
// using namespace std;
// int main(){
//     // & -> address of the variable
//     // * -> store the address of the variable
//     // If variable is int ,  float then u have to    make int or float 
//     // data_type * pointer_name; syntax
//     int x = 4;
//     int* p = &x;
//     // cout<<&x<<endl;
//     cout<<x<<endl;
//     *p = 46; // updatetion in pointer
//     cout<<*p; // dereference operator  
// }



// Pass by References 
// #include<iostream>
// using namespace std;
// void swap (int* x , int* y){
//     int temp = *x;
//     *x = *y; // 6
//     *y = temp ; // 8
//     return;
// }
// int main(){
//     int a = 8 , b = 6;
//     swap(&a , &b);
//     cout<<a<<"  "<<b;
// }



// Swap by Address 
// #include<iostream>
// using namespace std;
// void swap (int   &x , int &y){
//     int temp = x;
//     x = y; // 6
//     y = temp ; // 8
//     return;
// }
// int main(){
//     int a = 8 , b = 6;
//     swap(a,b);
//     cout<<a<<"  "<<b;
// }




// POINTER INCREMENT & DECREMENT 
// #include<iostream>
// using namespace std;
// int main(){
    // int x = 7;
    // int *ptr = &x; 
    // cout<<ptr<<endl;  // 0x61ff08
    // ptr = ptr + 1;
    // cout<<ptr<<endl;  // 0x61ff0c

    // bool flag = true;
    // bool *ptr = &flag;
    // cout<<ptr<<endl; //0x61ff0b
    //  ptr++;
    // cout<<ptr<<endl; //0x61ff0c

    //  int x = 4;
    //  int *ptr = &x;
    //  cout<<*ptr<<endl; //4
    //  ptr =  ptr + 1;
    //  cout<<*ptr<<endl;  // 6422284 it is garbage value because new address does not carry any value 


    //  int x = 4;
    //  int *ptr = &x;
    //  cout<<*ptr<<endl; //4
    //  *ptr =  *ptr + 1;
    // ( *ptr)++; // x = x + 1
    //  cout<<*ptr<<endl;  // 5

// }



// lastdigit & firstdigit  Using Pointer
// #include<iostream>
// using namespace std ;
// void find (int n , int *ptr1 , int *ptr2){
//     *ptr2 = n%10;
//     while(n>9){
//         n/=10;
//     }
//     *ptr1 = n;
//     return;
// }
// int main(){
//     int n ;
//     cin>>n;
//     int firstDigit , lastdigit;
//     int *ptr1 = &firstDigit;
//     int *ptr2 = &lastdigit;
//     find(n, ptr1 , ptr2 );
//     cout<< firstDigit<<" "<< lastdigit<<endl;
// }



// Null Pointer -> will be of great importances 
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr1 = NULL; // RESERVED ADDRESS
//     int *ptr2 = 0;
//     int *ptr3 = '\0';
//     cout<<ptr1<<" "<<ptr2<<" "<<ptr3; // 0x0
//     // \0 -> null character -0
//     // char ch = '\0';
//     // cout<<(int)ch;
// }



// DOUBLE POINTER ->  used to store address of a single pointer
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<***q<<endl;
}


