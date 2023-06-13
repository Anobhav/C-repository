#include <iostream>
using namespace std;

class subjects
{
    public:
    string a[5];
    
    int a1,b1,c1,d1,e1,total_credit;
    double a2,b2,c2,d2,e2;
    double cgpa_sub1,cgpa_sub2;
    
    void subjectname()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cout<<"enter subject name "<<i+1<<endl;
            cin>>a[i];
        }
        cout<<endl;
    }

    void display()
    {
        cout<<"Subjects you entered "<<endl;
        for(int i=0;i<5;i++){
            cout<<a[i]<<endl;
        }
    }
    void credit()
    {
        cout<<"enter credit for "<<a[0]<<endl;
        cin>>a1;
        cout<<"enter credit for "<<a[1]<<endl;
        cin>>b1;
        cout<<"enter credit for "<<a[2]<<endl;
        cin>>c1;
        cout<<"enter credit for "<<a[3]<<endl;
        cin>>d1;
        cout<<"enter credit for "<<a[4]<<endl;
        cin>>e1;        
    }
    void scored()
    {
        cout<<"enter marks scored in "<<a[0]<<endl;
        cin>>a2;
        cout<<"enter marks scored in "<<a[1]<<endl;
        cin>>b2;
        cout<<"enter marks scored in "<<a[2]<<endl;
        cin>>c2;
        cout<<"enter marks scored in "<<a[3]<<endl;
        cin>>d2;
        cout<<"enter marks scored in "<<a[4]<<endl;
        cin>>e2;
    }
   void totalcredit()
   {
        total_credit=(a1+b1+c1+d1+e1);
   }
   void calculator()
   {
        cgpa_sub1= (a1*a2)+(b1*b2)+(c1*c2)+(d1*d2)+(e1*e2);

        cgpa_sub2= cgpa_sub1 / total_credit;

        cout<<"cgpa is "<<cgpa_sub2<<endl;
   }
};

class attendace
{
    private: 
    string name; 
    public:
    float a5,b5,c5,d5,e5; int f5;
    void setname()
    {
       cout<<"enter your name"<<endl;
       cin>>name;
    }
    void setaim()
    {
        cout<<"enter the attendace percentage needed"<<endl;
        cin>>a5;
    }
    void class_att()
    {
        cout<<"enter total number of class"<<endl;
        cin>>b5;
        cout<<"enter total number of class you attended"<<endl;
        cin>>c5;
    }
    void class_needed()
    {
        d5=c5/b5;
        e5=a5*b5/100;
        f5=(int)e5-c5;
        if ((d5*100)<a5)
        cout<<"total number of classes need are "<<f5<<endl;
        else 
        cout<<"your attendence is above the required level.";
    }
};

int main()
{
    int b,c,i;
    cout<<"enter 1 for CGPA calculator and 2 for attendance manager"<<endl;
    cin>>i;
    if(i==1)
    {
        cout<<"CGPA calculator is ready"<<endl;
        cout<<"This program is used to calculate cgpa, the maximum marks socred is out of 10 by default"<<endl;
        subjects a;
        a.subjectname();
        a.display(); 
        a.credit();
        a.scored();
        a.totalcredit();
        a.calculator();
    }
    else
    {
        attendace a;
        cout<<"Attendace manager is ready"<<endl;
        cout<<"This program is used to calculate attendace needed, the maximum attendace socred is out of 100 by default"<<endl;
        a.setname();
        a.setaim();
        a.class_att();
        a.class_needed();
    }
    return 0;
}