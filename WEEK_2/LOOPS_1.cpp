  // -> PRINT ALL THE EVEN NUMBER FROM 1 TO 100 
#include<iostream>
using namespace std;
int main(){
    for (int i =1; i<=10; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        
    }
 // PRINT THE TABLE OF 19

 for (int i=19; i<=190; i+=19)
 {
   cout<<i<<endl;
 }

 // DISPLAY THIS AP 1,3,5,7,9 UPTO "N" TERMS
 int n ;
 cout<<"Enter the Number";
 cin>>n;
 int a = 1;
 for (int i = 0; i<=n; i++)
 {
    cout<<a<<endl;
    a = a + 2;
 }
  
  // 100 97 94 ..... 7 4 1 -> 34 terms 
 int b = 100;
 for (int i=1 ; b>0 ;  b=b-3)
 {
    cout<<b<<endl;
    // b = b - 3;
 }
}
