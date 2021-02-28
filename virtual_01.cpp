#include<iostream>

using std::cout;
using std::string;
using std::endl;



class Base
{
    public:

    virtual void print()
    {
        cout<<"PRINT FUNCTION  called from      BASE"<<endl;
    }

    virtual void show()
    {
        cout<<"i am marco,SHOW FUNCTION  from   BASE CLASS"<<endl;
    }


};





class derived:public Base
{

    public:

    void print()
    {
        cout<<"PRINT FUNCTION  called from      DERIVED CLASS"<<endl;
    };



};







int main()
{
    cout<<"\n\n";
    Base *b;


    derived d;
    d.print();
    d.show();


    b=&d;

    b->print();
    d.print();




    b->show();
    d.show();

    cout<<"\n\n";

}




//  refering to derived class with pointer or reference to the base class

//  and then accessing the re-defined virtual function of the derived class

//  it is done to achieve runtime polymorphism



//  for the non re-defined virtual functions, every object access only the base class virtual function

