#include<iostream>
using std::string;
using std::cout;
using std::endl;
class employee
{
    public:
    string name="N/A";
    int roll=-1;
    employee(string a,int roll)
    {
        this->roll=roll;
        name=a;
    }
    void introduce()
    {
        cout<<"my name is "<<name<<" and roll is "<<roll<<endl;
    }
};

int main()
{
    employee saad;
    saad.introduce();
}

