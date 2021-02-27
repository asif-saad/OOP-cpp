
#include<iostream> 
using namespace std; 

class GfG 
{ 
	static int i; 
	
	public: 
	GfG() 
	{ 
		i++; 
		cout << "Inside Constructor\t"<<i<<"\n"; 
	} 
	
	~GfG() 
	{ 
		cout << "Inside Destructor\t"<<i<<"\n"; 
	} 
}; 


int GfG::i=0;





int main() 
{ 
	int x = 0; 
	cout<<"\n\n";
	if (x==0) 
	{ 
		static GfG obj; 
	} 
	cout << "End of first if statement\n\n"; 

    static GfG obj;

    cout<<"End of main function\n\n";
} 



//	we can declare objects with same name, but not in same way
//	one of them has to be in coditional code's body



//	destructor was called at the end of the main function
//	because it is a static object,and so will be destroyed at the very end of the program
