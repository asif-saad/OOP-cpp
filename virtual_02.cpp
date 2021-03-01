#include<iostream>
using std::cout;
using std::endl;
using std::string;



class Base
{
    public:
    virtual void fun()
    {
        cout<<"virtual fun in BASE class"<<endl;
    }


    void print()
    {
        cout<<"print fun in BASE class"<<endl;
    }

};




class Derived:public Base
{

    public:
    void fun()
    {
        cout<<"virtual fun in DERIVED class"<<endl;
    }


    void print()
    {
        cout<<"print fun in DERIVED class"<<endl;
    }

};






int main()
{
    cout<<"\n\n";

    Base *b;
    Derived d;

    b=&d;

    b->fun();
    d.fun();



    b->print();
    d.print();



    cout<<"\n\n";

}



//  refering to the derived class, thereby accessing the virtual function of derived class

//  if without virtualisation, a function is over-ridden in derived class
//  then the pointer of base will be accessing the function of base class
//  and the object of the derived accessing the function of derived class