#include<iostream>
using namespace std;
class Base
{
	public:
	Base()
	{
		cout << "Constructing Base";
	}
	virtual ~Base()  //Virtual Destructor
	{
		cout<<"\nDestructing Base";
	}
};

class Derived:public Base
{
	public:
		Derived()
		{
			cout << "\nConstructing Derived";
		}
		virtual ~Derived()
		{
			cout<<"\nDestructing Derived";
		}
};
int main()
{
	Derived *d=new Derived();
	Base *b=d;
	delete b;
	return 0;
}
