#include<iostream>
using std::cout;
using std::endl;
using std::string;




class A
{
    int marks;
    friend void get_marks_and_name(A);
    string name;

    public:
    A(int x,string a):marks(x){name=a;};
};


void get_marks_and_name(A a)
{
    cout<<"marks is: "<<a.marks<<"and the name is: "<<a.name<<"\n\n";
}







int main()
{
    A ax(82,"Hogs");

    cout<<"\n\n";

    get_marks_and_name(ax);

}



// friend function can be declared in the private section of the class