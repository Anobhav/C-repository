#include <iostream>
using namespace std;

class stop
{ public: 
string s;
  void replace();
  void check()
  { int i;
      if(i==0 || i==1)
      { cout<<"number is binary"<<endl; }
      else 
      cout<<"number is not binary"<<endl;
  }
  
  void inputstring()
  { 
      cout<<"enter the string input: "<<endl;
      cin>>s;
      cout<<"entered string is: "<<s<<endl;
      check();  
  }
 
  void display()
  {   int i;
      cout<<"displaying our new string: "<<endl;
      for(i=0;i<s.length();i++)
      {
          cout << s.at(i);
      }
  }
};

void stop ::replace()
  {
      int i;
      for(i=0;i<s.length();i++)
      
      if(s.at(i)=='0')
      {
          s.at(i)='1';
      }
      else 
      {
          s.at(i)='0';
      }
  };

int main()
{   stop x;
    x.inputstring();
    x.replace();
    x.display();
    return 0;
}
