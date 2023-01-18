// C++ PROGRAM TO CALCULATE AREA OF A CIRCLE TO DEMONSTRATE PRIVATE ACCESS MODIFIER
#include<iostream>
using namespace std;
class Circle
{
	double radius;
	public:
		double compute_area(double r)
		{
			radius=r;
			return 3.14 * radius * radius;
		}
};
int main()
{
	Circle c;
	double r;
	cout<< "Enter radius: ";
	cin>> r;
	cout<< "Area of the circle is: " << c.compute_area(r);
	return 0;
}
