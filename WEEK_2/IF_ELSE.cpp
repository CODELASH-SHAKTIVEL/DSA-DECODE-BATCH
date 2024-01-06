        // ODD & EVEN

#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>a;
    if (a%2==0)
    {
        cout<<"NUMBER IS EVEN";
    } else {
        cout<<"NUMBER IS ODD";
    }
    return 0;
}

            // Divisible by 5 

#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>a;
    if (a%5 == 0)
    {
        cout<<"NUMBER IS EVEN";
    } else {
        cout<<"NUMBER IS ODD";
    }
    return 0;
}

            // ABSOLUTE VALUE 
#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>a;
    if (a>=0)   // if(a<0) then a = -a otherwise cout<<a;
    {
        cout<<a;
    } else {
        cout<<-a;
    }
    return 0;
}

            //  PROFIT & LOSS

#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE cost price"<<endl;
    int cp;
    cin>>cp;
    cout<<"ENTER THE selling price"<<endl;
    int  sp;
    cin>>sp;
    if (sp>cp) 
    {
        cout<<"profit =" <<sp-cp;
    }else if (cp==sp){
         cout<<"NO PROFIT , NO LOSS";
    } 
    else {
        cout<<"loss =" <<cp - sp;
    }
    return 0;
}





