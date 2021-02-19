#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class base
{
public:

    int id;
    string name;

    void setid(int id)
    {
        this->id=id;
    }
    int getid()
    {
        return id;
    }

    void setname(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }


};

class derived: public base
{
    public:
    int marks;
    void setmarks(int marks)
    {
        this->marks=marks;
    }
    int getmarks()
    {
        return marks;
    }

};

int main()
{
    base b;
    b.setid(2321);
    b.setname("mike");
    cout<<"\n\nid: "<<b.getid()<<"\t"<<"name: "<<b.getname()<<"\n\n";


    derived d;
    d.setmarks(72);
    cout<<"marks obtained: "<<d.getmarks()<<endl;

    
}


    // can access all the members of base class from derived as all the members of base class are public and
    // public inheritence been enacted

    // can even set values of base class' member from derived class

