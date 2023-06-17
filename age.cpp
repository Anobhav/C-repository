#include <iostream>
using namespace std;

class example
{
    int a;

public:
    void getdata()
    {
        cout << "Enter your age: " << endl;
        cin >> a;
        cout << "Your age is: " << a<<endl;
    }

    void age()
    {
        if (a > 18)
        {
            cout << "Can you drive" << endl;
        }
        else
        {
            cout << "Sorry, you cannot drive" << endl;
        }
    }
};

int main()
{
    example a;
    a.getdata();
    a.age();
}