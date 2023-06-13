#include <iostream>
using namespace std;

class example 
{
    public:
    
    int a,b,c,d;

    void divide();
    void multiply();
};

void example::divide()
{
    cout<<"Enter 2 numbers you want to divide"<<endl;
    cin>>a>>b;
    d=a/b;
    c=a%b;
    cout<<"On dividing we get: "<<d<<endl;
    cout<<"Remainder is: "<<c<<endl;
};

void example::multiply()
{
    cout<<"Enter 2 numbers to multiply"<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<"On multiplying the 2 number we get: "<<c<<endl;
}

int main()
{
    int d;
    example a;
    cout<<"Enter 1 for division or 2 for multiplication"<<endl;
    cin>>d;
    
    if(d==1)
    {
        a.divide();
    }
    else
    {
        a.multiply();
    }
}