  // && - lOGICAL AND OPERATOR AND || LOGICAL OR OPERATOR 

  #include<iostream>
  using namespace std;
  int main(){
     cout<<"Enter a number";
     int n;
     cin>>n;
     if (n%5 == 0 && n%3 == 0){
        // if condition 1 is false then compiler wont check for condition 2 
        cout <<"The number is divisible by 5 and 3";
     }
      else {
       cout<<"The number is divisible by 5 and 3";
     }
     
      // logical OR Operator 
     if (n%5 == 0 || n%3 == 0){
        // if condition 1 is false then compiler will check for condition 2 
        cout <<"The number is divisible by 5 and 3";
     }
      else {
       cout<<"The number is divisible by 5 and 3";
     }
  } 

  