#include<iostream>
using std::cout;
using std::endl;
using std::string;

class A     // Base class
{
    protected:
    int id;
    string name;
    public:
    void setid(int id)
    {
        this->id=id;
    }
    int getid()
    {return id;}
    void setname(string name)
    {this->name=name;}
    string getname()
    {return name;}
};

class B:public A    //  Derived class
{
    string doublename()
    {
        return name+" "+name;
    }

    public:
    string triplename()
    {return name+" "+name+" "+name;}
    

    // can access all member of public and protected access from derived class


};


int main()
{
    B b;
    cout<<b.triplename()<<"\n\n"; //  can not access the private doublename(), but can access public triplename


    b.setid(5324),b.setname("dwight");
    cout<<"id: "<<b.getid()<<"\n";
    cout<<"name: "<<b.getname()<<"\n";
    cout<<"tripple times name: "<<b.triplename()<<"\n";
}


//  protected in base can be accessed in derived class member, but not from outside or derived class' object

//  public can be accessed from anywhere
