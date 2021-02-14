#include<iostream>
using std::string;
using std::cout;
using std::endl;
class Base 
{ 
   //int x; 
public: 
    virtual void fun(string) = 0; 
    //int getX() { return x; } 
}; 
  
class Derived:Base 
{ 
    //int y; 
public: 
    void fun(string a) { cout << "fun() called "<<endl<<a; } 
}; 
  
int main(void) 
{ 
    Derived d; 
    d.fun("also a string from the main() function!"); 
    return 0; 
} 