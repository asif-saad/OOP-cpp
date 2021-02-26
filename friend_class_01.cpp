#include<iostream>


using std::cout;
using std::endl;
using std::string;





class A
{
    int length,width;
    int area;

    friend class B;


    public:

    A(int a,int b):length(a),width(b){area=a*b;}


    void total_area()
    {
        cout<<"total area via the function: "<<area<<endl;
    }




};




class B
{
    public:
    void ans(A a)
    {
        a.total_area();

        cout<<"total area by the variable 'area': "<<a.area<<endl;

        cout<<"length: "<<a.length<<"\t"<<"width: "<<a.width<<endl;
    }
};







int main()
{

    A ax(10,20);

    B bx;
    cout<<"\n\n";
    bx.ans(ax);
    cout<<"\n\n";

}




//  friend class is same as friend function

//  however,the child class of the main class(here it is class A), can not be accessed by the friend class