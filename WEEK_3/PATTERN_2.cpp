// RHOMBUS
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k<=n; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }   
// }



// STAR PYRAMID
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k<=2*i-1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }   
// }



// NUMBER PYRAMID PALINDROME
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i<=n; i++)
//     {
//         for (int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k<=i; k++)
//         {
//             cout<<k;
//         }
//         for (int q =i-1; q>=1; q--)
//         {
//             cout<<q;
//         }
//         cout<<endl;
//     }   
// }




// DIAMOND 
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"no of lines";
// cin>>n;
// int nst = 1;
// int nsp = n-1;
// for (int  i = 1; i <=2*n-1; i++)
// {
//     // spaces
//     for (int j = 1; j <=nsp; j++)
//     {
//        cout<<" ";
//     }
//     if (i<=n-1)
//     {
//         nsp--;
//     }else 
//        {
//         nsp++;
//        } 
//     // star
//     for (int k = 1; k <=nst; k++)
//     {
//         cout<<"*";
//     }
//     if (i<=n-1)
//     {
//         nst+=2;
//     } else{
//         nst -=2;
//     } 
    
//     cout<<endl;
// }

// }



// STAR BRIDGE


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"No of lines: ";
//     cin>>n;
//     for (int i = 1; i<=2*n-2; i++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//     int m = n - 1; // new lines
//     int nsp = 1;
//     for (int i = 1; i<m; i++)
//     {
//         // stars 
//         for (int j = 1; j<m+1-i; j++)
//         {
//             cout<<"*";
//         }
//         // spaces
//         for ( int k = 1; k<=nsp; k++)
//         {
//             cout<<" ";
//         }
//         nsp+=2;
//         // stars
//         for (int q = 1; q<m+1-i; q++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }


// NUMBER BRIDGE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"No of lines: ";
//     cin>>n;
//     for (int i = 1; i<=2*n-1; i++)
//     {
//         cout<<i;
//     }
//     cout<<endl;
//     int m = n - 1; // new lines
//     int nsp = 1;
//     for (int i = 1; i<=m; i++)
//     {
//         // numbers
//         int a=1;
//         for (int j = 1; j<=m+1-i; j++)
//         {
//             cout<<a;
//             a++;
//         }
//         // spaces
//         for ( int k = 1; k<=nsp; k++)
//         {
//             cout<<" ";
//             a++;
//         }
//         nsp+=2;
//         // number
//         for (int q = 1; q<=m+1-i; q++)
//         {
//             cout<<a;
//             a++;
//         }
//         cout<<endl;
//     }
    
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int originalN = n;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j=1; j<=2*n-1; j++)
        {
            // int print = originalN-min(min(i,j) , min(n-i,n-j));
            // cout<<print + " ";

            int a = i;
            int b =j;
            if(a>n) a = 2*n-i;
            if(b>n) b = 2*n-j;
            int x = min(a,b);
            cout<<n-x+1; 
        }
        cout<<endl;
    }
  return 0;
}



