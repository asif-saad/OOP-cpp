#include<iostream>
using std::cout;
using std::string;
using std::endl;



class A
{
    public:
    virtual void getname()=0;
    virtual void hello()
    {
        cout<<"hello from class A"<<endl;
    }
};

class B:public A
{
    public:
    void getname()
    {
        cout<<"in class B"<<endl;
    }
    private:
    void hello()
    {
        cout<<"hello from class B"<<endl;
    }
};

int main()
{
    A *a;
    B b;
    a=&b;
    a->getname();
    a->hello();
    //b.hello();

//  can not access via b


}


//  pure virtual function in class A
//  thus making class A an abstract class

//  however derived class's over-ridden virtual function can be accessed via a pointer of base referring to the derived class
//  base class's virtual function can not be private

