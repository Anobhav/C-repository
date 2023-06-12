#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter 1/2/3\n 1 = Sum of 2 numbers\n 2 = Swapping 2 numbers\n 3 = Subtracting 2 numbers"<<endl;
    cin>>a;
    
    if(a==1)
    {
        cout<<"Let's add the 2 numbers, Please enter 2 numbers"<<endl;
        cin>>b>>c;
        d=b+c;
        cout<<"Sum of 2 numbers is: "<<d;
    }
    
    if(a==2)
    {
        cout<<"Swapping 2 numbers"<<endl;
        cin>>b>>c;
        cout<<"B and C before swapping "<<b<<","<<c<<endl;
        d=b;
        b=c;
        c=d;
        cout<<"After swapping values of b and c are "<<b<<","<<c;
    }

    if(a==3)
    {
        cout<<"Subtracting 2 numbers, Please enter 2 numbers"<<endl;
        cin>>b>>c;
        if(b>c)
        {
            d=b-c;
        }

        else if (c>b)
        {
            d=c-b;
        }
        cout<<"On subtracting we get"<<d;
    }

}
