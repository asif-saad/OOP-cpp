#include<iostream>
using std::cout;
using std::endl;
using std::string;


class A
{
    A()
    {
        cout<<"cosntructor in private"<<endl;
    }
    protected:
    A()
    {
        cout<<"cosntructor in protected"<<endl;
    }
    public:
    A()
    {
        cout<<"cosntructor in public"<<endl;
    }
};

// can not overload constructor as they all have same parameter or argument

class B
{
    private:

    B()
    {
        cout<<"cosntructor in private"<<endl;
    }

    public:
    B(int a,int b)
    {
        cout<<"cosntructor in public"<<endl;
    }
    
    protected:
    B(int m,int b,float q)
    {
        cout<<"cosntructor in protected"<<endl;
    }
};



int main()
{

    A a();

    B b1();
    B b2(56324,4,65.6);
    B b3(1,4);

}

//  constructor can not be overloaded
//  can not declare same name object more than once before destructor being called