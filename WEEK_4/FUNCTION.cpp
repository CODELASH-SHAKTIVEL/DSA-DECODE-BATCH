// permutation & combination 
// for using math use #include<cmath>
// min ,max ,squre , pow

//  #include<iostream>
//  using namespace std ;
//  int fact(int x){
//   int f = 1;
//   for (int i = 2; i<=x; i++)
//   {
//     f*=i;
//   }
//   return f;
//  }


// int combination(int n , int r){
//      int combo = fact(n)/(fact(r)*fact(n-r));
//      return combo;
// }

// int permutation(int n , int r){
//   int permut = fact(n)/fact(n-r);
// }

//  int main(){
//   int n ,r ;
//   cin>>n;
//   cin>>r;
//   // int nfact=fact(n);
//   // int rfact=fact(r);
//   // int nrfact=fact(n-r);
//   // int ncr = nfact/(rfact*nrfact);
//    int combo = combination(n,r);
//    int permut = permutation(n,r);
//   cout<<combo<<endl<<permut<<endl;
//  }


// PASCAL TRIANGLE
//  #include<iostream>
//  using namespace std;

//  // factorial
//  int fact(int x){
//   int f = 1;
//   for (int i = 2; i<=x; i++)
//   {
//     f*=i;
//   }
//   return f;
//  }


// int combination(int n , int r){
//      int combo = fact(n)/(fact(r)*fact(n-r));
//      return combo;
// }


//  int main(){
//     int n ; 
//     cin>>n;
//     for (int i = 0; i <=n; i++)
//     {
//       for (int  j = 0; j<=i; j++)
//       {
//         cout<<combination(i,j)<<"  ";//icj
//       }
//       cout<<endl;
//     }  
//  }



// PASCAL TRIANGLE OPTIMIZIED
//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n ; 
//     cin>>n;
//     for (int i = 0; i <=n; i++)
//     {
//       int curr = 1;
//       for (int  j = 0; j<=i; j++)
//       {
//        cout<<curr<<" ";
//        curr = curr *(i-j)/(j+1);
//        // maths formula icj = icj+1 = icj *(i-j/j+1)
//       }
//       cout<<endl;
//     }  
//  }




 // GREATEST COMMON DIVISOR 
//  #include<iostream>
//  #include<cmath>
//  using namespace std;
//  int gcd (int a ,int b){
//      int hcf = 1;
//      for (int i = min(a,b); i>=1; i--)
//      {
//       if (a%i==0 && b%i==0)
//       {
//         hcf =i;
//         break;
//       }
//      }
//       return hcf;
//  }

//        int main(){
//         int a ;
//         cout<<"enter 1st number : ";
//         cin>>a;
//         int b ;
//         cout<<"enter 2nd number :";
//         cin>>b;
//         cout<<gcd(a,b);
//        }


// factorial of n terms 
// #include<iostream>
// using namespace std;
// int main(){
//     int n , fact = 1 ;
//     cin>>n;
//     for (int i = 1; i<=n; i++)
//     {
//       fact*=i;
//     cout<<fact<<endl;
//     }
// }


// swap without temp or external variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a ,  b ;  // 7 3 
//     cin>>a>>b;
//        // without using temp or external variable
//        a = a+b; // 10
//        b = a-b;   // 7
//        a = a-b;   // 3 
//        cout<<a<<" "<<b;
// }


