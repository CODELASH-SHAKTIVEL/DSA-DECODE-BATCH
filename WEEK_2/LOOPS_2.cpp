#include<iostream>
using namespace std;
int main(){
    // Prime Or Not 
    // int n;
    // cout<<"ENTER THE INTEGER";
    // cin>>n;
    // for (int i=2 ; i<=n-1; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<n<<" is a composite number"<<endl;
    //         break; 
    //     } 
    //     else {
    //         cout<<"SORRY NOT FOUND";
    //     }
    // } 
    
    int n;
    cout<<"ENTER THE INTEGER";
    cin>>n;
    // bool flag = true ; // True Means Prime
    for (int i=2 ; i<=n-1; i++)
    {
        if (n==1)
         { 
            cout<<"1 is neither prime or composite"<<endl;
        }
        if (n%i==0) // i is a factor of n 
        {
            // flag = false; // false means composite 
             cout<<n<<" is a composite number"<<endl; 
            break; 
        } 
        else 
        // if 
        // (flag==true) 
        {
            cout<<n<<" is prime"<<endl;
            break;
        }
    } 
}


// CONTINUE EXPLAINTION
// for (int i = 1; i <=10; i++)
// {
//   if (i%2==0) continue;
//     cout<<i<<endl;
// }


// INFINITE LOOP 
// int main (){
//     while ('a'<'b')
//     {
//         cout<<"hello"<<endl;
//     }
// }