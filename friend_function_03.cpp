#include<iostream>
using std::cout;
using std::endl;
using std::string;


class A;





class B
{
    string name="Otto Henz";
    //void getname(A ax);

    //can not make the friend function private in its parent class, as thereby can not access that from outside



    public:
    B(string Name):name(Name){};


    void getname(A ax);

    //  definition of getname() function does not work here, as the argument takes class A and there is no definition of the class beforehand



};






class A
{

    int marks;


    friend void B::getname(A);


    public:
    A(int x):marks(x){};


};



void B::getname(A ax)
{
    cout<<"Name of the applicant is "<<name<<endl;
    cout<<"and the marks been obtained: "<<ax.marks<<endl;
}

//  had to declare the friend function after the class A, else program is not working





int main()
{

    A a(82);

    B b("muller scheer");
    b.getname(a);



}










//     friend class is a member class of another class