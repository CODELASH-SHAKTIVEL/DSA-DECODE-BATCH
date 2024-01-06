 // DIVISIBLE BY 5 OR 3 BUT NOT DIVISIBLE BY 15

 #include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter  the interger : ";
    cin>>n;
    if((n%5==0 || n%3==0) && n%15!=0){
        cout<<"The number is divisible by 5 or 3 but not 15";
    }else{
        cout<<"Not matching condition";
    }
    
    if(n%5==0 || n%3==0) {
        if ( n%15!=0)
        {
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"Not matching condition";
        }
    
}
}