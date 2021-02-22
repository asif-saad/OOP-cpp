#include<iostream>
using std::cout;
using std::string;
using std::endl;

class A
{
    int id=24665;
    void fun_in_private()
    {
        cout<<"member function of base class in private mode"<<endl;
    }
    public:
    int marks=80;
    void fun_in_public()
    {
        cout<<"member function of base class in public mode"<<endl;
    }

    protected:
    string name="robin";
    void fun_in_protected()
    {
        cout<<"member function of base class in protected mode"<<endl;
    }

};

class B:protected A
{
    public:
    B()
    {

    };
    void derived_class()
    {
        cout<<"currently in derived class"<<endl;
        fun_in_public();
        cout<<marks<<endl;
        cout<<name<<endl;
        fun_in_protected();
    }

};


int main()
{
    B b;
    cout<<"\n\n";
    b.derived_class();
    A a;
    a.fun_in_public();
    cout<<"\n\n";
}


//  can never access protected member of any class from outside
//  but protected can be accessed by derived classes
//  protectedly inherited derived class can not access only private member of base class