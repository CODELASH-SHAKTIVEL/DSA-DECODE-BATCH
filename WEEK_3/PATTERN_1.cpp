        // SOLID RECTANGLE

//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     cin>>m;
//     for (int i= 1; i<=n; i++)
//     {
//         for (int j= 1; j<=m; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//  }

        // SOLID SQUARE

//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     // cin>>m;
//     for (int i= 1; i<=n; i++)
//     {
//         for (int j= 1; j<=n; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//  }

        // NUMBER SQUARE

//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     // cin>>m;
//     for (int i= 1; i<=n; i++)
//     {
//         for (int j= 1; j<=n; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//  }

        // *  STAR TRIANGLE

//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     // cin>>m;
//     for (int i= 1; i<=n; i++)
//     {
//         for (int j= 1; j<=i; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//  }

        // STAR TRIANGLE REVERSE
//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     // cin>>m;
//     for (int i=1; i<=n; i++)
//     {
//         for (int j= 1; j<=n+1-i; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//  }

             // NUMBER TRIANGLE
//  #include<iostream>
//  using namespace std;
//  int main (){
//     int n , m ;
//     cin>>n;
//     // cin>>m;
//     for (int i=1; i<=n; i++)
//     {
//         for (int j= 1; j<=i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//  }


            //ODD NUMBER TRIANGLE
//    #include<iostream>
//    using namespace std;
//    int main(){
//     int n;
//     cout<<"No of rows : ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j<=i; j++)
//         {
//            cout<<a;
//            a+=2;
//         }
//         cout<<endl;
//     }
//    }         

        // Alphabet Square
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//         cin>>n;
//         for (int i = 1; i <=n; i++)
//         {
//                 for (int j = 1; j<=n; j++)
//                 {
//                         cout<<(char)(j+64)<<" ";
//                 }
//               cout<<endl;  
//         }
        
// }

                // STAR PLUS
// #include<iostream>
// using namespace std;

// int main(){
//         int n ;
//         cin>>n;
//         int midpoint = (n/2)+1;
//         for (int i = 1; i <=n ; i++)
//         {
//                 for (int j = 1; j<=n; j++)
//                 {
//                        if(i==midpoint || j==midpoint) cout<<"*";
//                        else cout<<" ";
//                 } 
//                 cout<<endl;
//         }
        
// }


// left side triangle
// #include<iostream>
// using namespace std;

// int main(){
//         int n ;
//         cin>>n;
//        for (int i = 1; i<=5; i++) {
//         for (int j = 5; j>i; j--) {
//         cout << " ";
//          }
//          for (int k = 1; k <= i; k++) {
//         cout <<k;
//            }
//         cout << endl;
// }
// }


// pattern printing
        // 5432*
        // 543*1
        // 54*21
        // 5*321
        // *4321

// #include<iostream>
// using namespace std;

// int main(){
//        for (int i = 1; i<=5; i++) {
//         for (int j = 5 ; j>=1; j--) {
//         if (j==i)
//         {
//              cout<<"*";
//         }
//         else{
//          (cout<<j);
//         }
//         }
//         cout << endl;
//         }
// }


// STAR CROSS
// #include<iostream>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;
//        for (int i = 1; i<=n; i++) {
//         for (int j = 1 ; j<=n; j++) {
//          if (i==j || i+j==n+1)
//         {
//              cout<<"*";
//         }
//         else{
//          (cout<<" ");
//         }
//         }
//         cout << endl;
//         }
// }


//    FLOYD'S TRIANGLE
// #include<iostream>
// using namespace std;

// int main(){
//      int n ;
//      cin>>n;
//      int k = 1;
//      for (int i = 1; i <= n; i++)
//      {
//         for (int j = 1; j <=i; j++)
//         {
//                cout<<k<<" ";
//                k+=1;
//         }
//         cout<<endl;
//      }
// }


// BINARY TRIANGLE
// #include<iostream>
// using namespace std;

// int main(){
//      int n ;
//      cin>>n;
//      int k = 1;
//      for (int i = 1; i <= n; i++)
//      {
//         for (int j = 1; j <=i; j++)
//         {
//               if ((i+j)%2==0)
//               {
//                 cout<<"1";
//               }else{
//                 cout<<"0";
//               }    
//         }
//         cout<<endl;
//      }
// }


  //   STAR TRIANGLE FLIPPED
// #include<iostream>
// using namespace std;

// int main(){
//      int n ;
//      cin>>n;
//      int k = 1;
//      for (int i = 1; i<=n; i++)
//      {
//         for (int j=1; j<=n-i; j++)
//         {
//            cout<<" ";    
//         }for (int k=1; k<=i; k++)
//         {
//                 cout<<k;
//         }
//         cout<<endl;
//      }
// }






