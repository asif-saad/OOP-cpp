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
    cout<<"constructure called and the value is: "<<id<<endl;}
    ~A()
    {
        cout<<"desctructor called an the value is: "<<id<<endl;
    }
};

void fun(int val)
{
    A a(val);
    cout<<a.id<<"\n";
}
int main()
{
    fun(1);
    cout<<"\n\n";
    fun(2);
    cout<<"\n\n";
    fun(3);
    cout<<"\n\n";
    A a(10);
    cout<<a.id<<endl;
}


//  destructor called as soon as the function and program ends