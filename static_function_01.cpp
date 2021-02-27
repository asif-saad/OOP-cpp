#include<iostream>
using std::endl;
using std::cout;
using std::string;




class A
{
    int length,width;

    static int object_cnt;


    public:

    A(int length,int width)
    {
        this->length=length;
        this->width=width;
        object_cnt++;
    }



    static void cnt_func()
    {
        cout<<"total object: "<<object_cnt<<endl;
    }

};



int A::object_cnt=0;





int main()
{

    A a(10,20);
    A b(42,532);
    //A a(4535,63);
    
    // can not declare so, as been declared earlier


    A::cnt_func();

}



//  same as static variable

//  has to be in public mode