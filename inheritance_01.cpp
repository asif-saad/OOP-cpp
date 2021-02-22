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

class B:A
{
    public:
    void derived_class()
    {
        fun_in_protected();
        fun_in_public();
    }

};


int main()
{
    B b;
    b.derived_class();
}

//  as the base class is being inherited by default in private, so we can not access any function of base class