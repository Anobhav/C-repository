#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter 0 or 1,\n 1 - adding 2 numbers\n 0 - swaping 2 numbers"<<endl;
    cin>>a;
    
    if(a==1)
    {
        cout<<"Let's add the 2 numbers, Please enter 2 numbers"<<endl;
        cin>>b>>c;
        d=b+c;
        cout<<"Sum of 2 numbers is: "<<d;
    }
    
    else
    {
        cout<<"Code is under development"<<endl;
    }
}
