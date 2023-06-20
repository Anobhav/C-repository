#include <iostream>
using namespace std;
class complex
{
    int a; //variable
    int b; //variable
    int v1; //variable
    float v2; //variable 
    float v3; //variable 
    float v4; //variable
    
    public:

    complex() // default constructor
    {
        cout << "number a entered is: " << endl;
        cin >> a;
        cout << "number b entered is: " << endl;
        cin >> b;
    }

    complex(int x, int y)
    {
        a=x;
        y=b;
        cout << "the entered complex number is: " << x << "+i" << y << endl;
    }
    complex(int f1, float f2) // paramaterized constructor
    {
        a = f1;
        b = f2;
        cout << "the entered complex number is: " << v1 << "+i" << v2 << endl;
    }

    complex (float f3, float f4)//paramaterized constructor 
    {
        v3=f3;
        v4=f4;
        cout<<"eneter complex taking float and float is:"<<v3<<"+i"<<v4<<endl;
    }
    void display_number()
    {
        cout << "the entered complex number is: " << a << "+i" << b << endl;
    }
};
//constructor overloading done becz all the constructors are by the name of complex 

int main()
{
    int x, y; //variable
    int v1; //variable
    float v2; //variable
    float v3,v4; //variable

    cout << "value of v1" << endl;
    cin >> v1;
    cout << "value of v2" << endl;
    cin >> v2;
    cout << "value of x" << endl;
    cin >> x;
    cout << "value of y" << endl;
    cin >> y;
    cout << "value of v3" << endl;
    cin >> v3;
    cout << "value of v4" << endl;
    cin >> v4;
    complex t1; //object t1
    complex t2(x, y); //object t2 calling for paramateried constructor 
    t1.display_number(); 
    t2.display_number(); 
    complex t3(v1, v2); ////object t3 calling for paramateried constructor 
    complex t4(v3,v4);
    return 0;
}

/*storing a default value in a variable declared is used when a new value is not assigned to that variable. 
These are known as constructors with default arguments 
runtime per kaise run kara jata hai.... in professional language initializing objecting dynamically 
only after receiving the value from the user we can tell which constructor runs 
example for int value we might have one constructor, for float value we might have another
constructor and for no input, we might have a default constructor. 
all the constructors have the same name and are called by the same name, this is an example of 
constructor overloading 

destructors na argument leta hai na value deta hai
used to destruct a variable, it free's the memory allocated to an object after it has been used 
*/ 

