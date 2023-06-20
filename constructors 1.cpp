#include <iostream>
using namespace std;
// constructors in c++

class student
{
    string name;
    int student_id;
    double fee_submitted;

    public:

    void display()
    {
        cout<<"entered details are: "<<name<<student_id<<fee_submitted<<endl;
    }
    student()
    {
        cout<<"enter student name: "<<endl;
        cin>>name;
        cout<<"enter student ID: "<<endl;
        cin>>student_id;
        cout<<"entre free submitted: "<<endl;
        cin>>fee_submitted;
    }
};

int main()
{
    student s;
    s.display();
    return 0;
}