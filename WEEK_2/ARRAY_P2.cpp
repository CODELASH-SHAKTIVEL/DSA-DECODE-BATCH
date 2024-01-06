// Armstrong from 1 to 1000
#include<iostream>
using namespace std;
 void armstrong(int num){
    for (int i = 0; i<num; i++)
    {
       int num = i;
        int temp = 0;
        temp = num;
        int rem =0;
        int arm = 0;
        while(num!=0){
            rem = num%10;
            arm += (rem*rem*rem);
            num = num/10;
        }
        if (arm==temp)
        {
            cout<<arm<<" ";
        } 
    }
 }
int main(){
    int num ;
    cin>>num;
    armstrong(num);
}