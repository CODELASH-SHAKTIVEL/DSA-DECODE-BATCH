#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter  the character : ";
    cin>>ch;
    int ascii = (int)ch;
    if (ascii>=65 && ascii<=90)
    {
        cout<<"The character is Uppercase alphabet";
    }
    return 0;
    if (ascii>=97 && ascii<=122)
    {
        cout<<"The character is lowercase alphabet";
    }
    
}

// if (ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122)
// {
//     // && > || percedences also uses ()
//     cout<<"THIS IS ALPHABET";
// }




//   ASCII A-> 65
//           B -> 66 , Z- 90
//   ASCII a-> 97
//           b -> 98 , z -> 122
//        0-> 48 
//        1 -> 49 , 9-> 57

