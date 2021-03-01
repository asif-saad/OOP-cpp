#include<iostream>

using std::cout;
using std::endl;
using std::string;



class friend_class;


class base
{
    public:
    virtual void fun(friend_class a);

};



class derived:public base
{
    public:
    void fun(friend_class a);
};




class friend_class
{
    
    string name;

    public:
    friend_class(string n):name(n){};
    private:
    friend void base::fun(friend_class);
    friend void derived::fun(friend_class);

};



void derived::fun(friend_class a)
{
    cout<<"VIRTUAL FUNCION   DERIVED class";
    cout<<"\t"<<a.name<<endl;
}





void base::fun(friend_class a)
{
    cout<<"VIRTUAL FUNCION   BASE class";
    cout<<"\t"<<a.name<<endl;
}





int main()
{
    cout<<"\n\n";

    base *b;
    derived d;
    b=&d;
    friend_class f("MIKE");


    b->fun(f);
    d.fun(f);



    d.base::fun(f);




    cout<<"\n\n";
    

}