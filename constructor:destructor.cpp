#include<iostream>
using std::cout;
using std::endl;
using std::string;

class A
{
    public:
    int id;
    A(int id)
    {this->id=id;
    cout<<"constructure called"<<endl;}
    ~A()
    {
        cout<<"desctructor called"<<endl;
    }
};


int main()
{
    A a(42);
    cout<<a.id<<endl;

}

//  Destructor is a member function which destructs or deletes an object.

//  A destructor should be declared in the public section of the class.

//  The programmer cannot access the address of destructor.

//  a destructor is called when -->function ends
//                              -->program ends


//  there can only one destructor in a class 

//  If we do not write our own destructor in class, compiler creates a default destructor for us

//  When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed

//  a good idea to make destructors virtual in base class when we have a virtual function
