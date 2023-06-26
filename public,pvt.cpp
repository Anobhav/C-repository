#include <iostream>
using namespace std;

class Number 
{
    private:
        int a,b;
    public:
        int c,d,x,z,y;

        void setData (int, int, int, int); 
        void getData()
        { cout<<"value of a is "<< a <<endl;
          cout<<"value of b is "<< b <<endl;
          cout<<"value of c is "<< c <<endl;
          cout<<"value of d is "<< d <<endl<<endl;
        }
        void add()
        { 
         x;
            x=a+b;
            cout<<"value of x we get: "<<x<<endl<<endl;
        }
        void addzzpublic()
        {
         z;
            z=c+d;
            cout<<"adding public varibles we get: "<<z<<endl<<endl;
        }
        
        void subtract()
        {
         y;
        y=z-x;
        cout<<"value of y is : "<<y<<endl;
        }
};

void Number :: setData(int a1, int b1, int c1, int d1)
{
    a=a1;
    b=b1;
    c=c1;
    d=d1;

}

int main ()
{ 
    int a2,b2,c2,d2;
    cout<<"INPUT"<<endl;
    cin>>a2>>b2>>c2>>d2;
    Number x;
    x.setData(a2,b2,c2,d2);
    x.getData();
    x.add();
    x.addzzpublic();
    x.subtract();
    return 0;
}
