// WAP TO COUNT DIGITS OF A GIVEN NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE INTEGER";
    cin >> n;
    int count = 0;
    int a = n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    if (a == 0)
        cout << 1;
    else
        cout << count << endl;
}

// WAP TO PRINT SUM OF DIGITS OF A GIVEN NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE INTEGER";
    cin >> n;
    int LastDigit = 0;
    int sum = 0;
    while (n > 0)
    {
        LastDigit = n % 10;
        sum += LastDigit;
        n /= 10;
    }
    cout << sum << endl;
}


// WAP TO PRINT REVERSE OF A GIVEN NUMBER
#include<iostream>
using namespace std ;
int main (){
    int n ;
     cout<<"ENTER THE INTEGER";
     cin>>n; // 1234
     int LastDigit = 0;
     int rev = 0;
     while (n>0)
     {
        rev = rev*10;
        LastDigit = n%10;
        rev += LastDigit;
        n/=10; // 0.4 will be removed
     }
     cout<<rev<<endl;
}


// PRINT THE SUM OF THIS SERIES:
// 1- 2 + 3 - 4 + 5 - 6.... upto 'n'
#include<iostream>
using namespace std ;
int main (){
    int n ;
     cout<<"ENTER THE INTEGER";
     cin>>n; // 1234
     int sum =0;
    for (int  i = 0; i <=n ; i++)
    {
      if(i%2==0) sum = -n/2;
      cout<<sum;
    }
}


// PRINT THE FACTORIAL OF A GIVEN NUMBER 'N'
#include<iostream>
using namespace std ;
int main (){
    int n ;
     cout<<"ENTER THE INTEGER";
     cin>>n;
     int product =  1 ;
     for (int i=1; i<=n; i++)
     {
       product*=i;
     }
     cout<<product<<endl;
}


// PRINT THE NTH FIBONAACCI NUMBER
#include<iostream>
using namespace std ;
int main (){
    int n ;
     cout<<"ENTER THE INTEGER";
     cin>>n;
     int a=1 , b=1 , sum = 0;
     for (int i = 0; i <=n-2; i++)
     {
        sum =a+b;
        a=b;
        b = sum;
     }
     cout<<b<<endl;
}


// BASE * EXPONENT
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter base ";
    cin >> a;
    cout << "Enter Exponent";
    cin >> b;
    bool flag = true; // true means power positive
    if (b < 0)
    {
        flag = false;
        b = -b;
    }
    float power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    if (flag == false)
    {
        power = 1 / power;
        b = -b;
    }
    if (a == 0 && b == 0)
    {
        cout << "Not Defined";
    }
    else
    {
        cout << a << "raised to the power" << b << "is " << power << endl;
    }
}