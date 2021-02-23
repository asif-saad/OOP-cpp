#include<iostream>
using std::string;
using std::cout;
using std::endl;


class A
{
    int id=423;
    public:

        void name()
            {cout<<"the name is Olav"<<endl;}
        friend void friend_function(A &x);
};

void friend_function(A &x)
{
    cout<<x.id<<endl;
}

int main()
{
    A ax;
    ax.name();
    friend_function(ax);
}


//  implementing friend class
//  friend function is no member of the class,thereby was not called on via the object
//  but can access all the attribute of the class


  