// C++ PROGRAM TO CALCULATE AREA OF A CIRCLE TO DEMONSTRATE PUBLIC ACCESS MODIFIER
#include<iostream>
using namespace std;
class Circle
{
	public:
		double radius;
		double compute_area()
		{
			return 3.14 * radius * radius;
		}
};
int main()
{
	Circle c;
	cout<< "Enter radius: ";
	cin>> c.radius;
	cout<< "Area of the cicle is: " << c.compute_area();
	return 0;
}
