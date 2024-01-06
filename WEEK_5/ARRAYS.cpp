// ********************** ARRAYS  DSA ************************//

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[7] = { , , , , , };
//    //INPUT
//    for (int i = 0; i <=6 ; i++)
//    {
//     cin>>arr[i];
//    }
//    // OUTPUT
//    for (int i = 0; i <=6; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
// }



// PROBLEM
// LESS THAN 35 MARKS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER NO OF STUDENTS :";
//     cin>>n;
//    int marks[n];  // just still simple  warning
//    //INPUT
//    for (int i = 0; i<=n-1 ; i++)
//    {
//     cin>>marks[i];
//    }
//    // OUTPUT
//    for (int i = 0; i<=n-1; i++)
//    {
//     if (marks[i]<35)
//     {
//         cout<<i<<" ";
//     }
//    }
// }



// SIZE OF  ARRAYS
//  #include<iostream>
//  using namespace std ;
//  int main(){
//         int arr[] = {1,2,1,5,56,78,8,89,3,5,6,8,9,9};
//         int size = sizeof(arr)/sizeof(arr[5]); // all the bytes / 4 byte
//         cout<<size;
//  }




// MEMORY ALLOCATION IN ARRARYS -> CONTINUOUS MEMORY ALLOCATION
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     // cout<<arr<<endl; will print address of the arr exception
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
//         // 0x61fefc // same as arr[0];
//         // 0x61fefc
//         // 0x61ff00
//         // 0x61ff04
//         // 0x61ff08
//         // 0x61ff0c
// }



//  SUM OF ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     // input
//     for (int i = 0; i<=n-1; i++)
//     {
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for (int  i = 0; i <=n-1; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout<<sum;
// }



// LINEAR SEARCH
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter size of array";
//     cin>>n;
//     int arr[n];
//     // input
//     for (int i = 0; i<=n-1; i++)
//     {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"element to  search in array ";
//     cin >>x;
//     // //search
//     // for (int  i = 0; i <=n-1; i++)
//     // {
//     //    if (arr[i]==x)

//     //    {
//     //     cout<<"present";
//     //    }

//     // }
//     //search
//     // check mark  if elements are repeating
//     bool flag = false; // not present
//     for (int  i = 0; i <=n-1; i++)
//     {
//        if (arr[i]==x)

//        {
//         flag = true;
//        }

//     }
//     if (flag==true)
//     {
//         cout<<"element found ";
//     } else{
//         cout<<" 404";
//     }

// }



// LINEAR SEARCH
// MAX NUMBER IN ARRAYS
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<=n-1; i++)
//     {
//        cin>>arr[i];
//     }
//     // int max = arr[0];
//     int max = INT_MIN; // lowest value of int n
//     int max = INT16_MAX; // HIGHEST value of int n
//     for (int i = 0; i<=n-1; i++)
//     {
//        if (max<arr[i])
//        {
//          max=arr[i];
//        }

//     }
//    cout<<max;
// }



// LINEAR SEARCH
// SECCOND MAX IN ARRAYS
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin>>arr[i];
//     }

//     // first maximum
//     int max = INT16_MIN;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }

//     // second maximum
//     int smax = INT16_MIN;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (arr[i] != max && smax < arr[i])
//         {
//             smax = arr[i];
//         }
//     }

//     cout << max << endl;
//     cout << smax << endl;
// }



// GREATER THAN THE GIVEN NUMBER X 
// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"size of array";
//     cin>>n ; 
//     int arr[n];

//     // input
//     for (int i = 0; i <= n-1 ; i++)
//     {
//         cin>>arr[i];
//     }
    
//     // given number
//     int x;
//     cout<<" enter the x : ";
//     cin>>x;

//     int count = 0; // important 
//     for (int  i = 0; i <= n-1 ; i++)
//     {
//         if (arr[i]>x)
//         {
//             count++;
//         }
//     } 
//     cout<<count; //  greater than x 
// }



