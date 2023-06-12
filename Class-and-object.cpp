#include <iostream>
using namespace std;

class one
{   public:
    
    int a,b,c;
    
    void getdata()
    {
        cout<<"Input 2 integers";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"The 2 numbers are "<<a<<","<<b<<endl;
    }

    void sum()
    {
        cout<<"Sum of the 2 numbers "<<a+b<<endl;
    }

    void sub()
    {
        if(a>b)
        {
            cout<<"Subtracting 2 numbers we get "<<a-b<<endl;
        }
        else 
        {
            cout<<"Subtracting 2 numbers we get "<<b-a<<endl;
        }
    }
};
int main()
{
    one a;
    a.getdata();
    a.display();
    a.sum();
    a.sub();
}
