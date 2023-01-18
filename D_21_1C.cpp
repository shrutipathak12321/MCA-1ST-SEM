// C++ PROGRAM TO CALCULATE AREA OF A CIRCLE TO DEMONSTRATE PROTECTED ACCESS MODIFIER
#include<iostream>
using namespace std;
class Base
{
	protected: 
	double radius;
};
class Derived: public Base
{
	public:
		double compute_area(double r)
		{
			radius=r;
			return 3.14 * radius * radius;
		}
};
int main()
{
	Derived c;
	double r;
	cout<< "Enter radius: ";
	cin>> r;
	cout<< "Area of the circle is: " << c.compute_area(r);
	return 0;
}
