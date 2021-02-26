#include<iostream>
using std::cout;
using std::endl;
using std::string;




class A
{
    void function_private()
    {
        cout<<"function in private"<<endl;
    }


    public:

    void function_public()
    {
        cout<<"function in public"<<endl;
    }



    protected:

    void function_protected()
    {
    
        cout<<"function in protected"<<endl;
    }

};






int main()
{

    A a;
    cout<<"\n\n";

    a.function_public();

    //a.function_protected();
//  can not access the protected member


    //a.function_private();
//  can not access the private member


    cout<<"\n";


}