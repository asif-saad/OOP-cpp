#include<iostream>
using std::cout;
using std::endl;
using std::string;



class B;
//  forward declaration




class A
{

    friend int addNumber(A,B);
    int marks;
    public:
    A(int x):marks(x){};
    //  constructor to initialise the value of marks attribute
};






class B
{
    public:
    friend int addNumber(A,B);
    //  friend function of both class A and B

    int marks;
    B(int x):marks(x){};
    //  constructor to initialise the value of marks attribute

};




//  declaration of friend function

int addNumber(A a,B b)
{
    cout<<"\nadded marks is: "<<a.marks+b.marks<<endl;
    return 0;
}







int main()
{
    A ax(10);B bx(20);


    addNumber(ax,bx);

}


//  friend function of 2 different classes







/// DOUBTS!!!!!!!

//  why can we not pass the value by reference in the friend function??????