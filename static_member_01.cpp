#include<iostream>
using std::cout;
using std::endl;
using std::string;



class A
{

    
    int roll;
    string name;

    public:

    A(string s,int r)
    {
        name=s;
        roll=r;
        cnt++;
    }


    static int cnt;

};

int A::cnt=0;



int main()
{
    A otto("otto",423);
    cout<<"cnt value: "<<A::cnt<<endl;


    A mitch("mitch",56);
    cout<<"cnt value: "<<A::cnt<<endl;


    A anna("Anna",36754);
    cout<<"cnt value: "<<A::cnt<<endl;

}



//  only one memory allocated for all object of that class for the static variable

//  with scope resolution, static variable be initialised outside the class globally

//  can not access the static variable with object name

//  only with class name(scope resolution included) can access the static variable