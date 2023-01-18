#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
	float a,b,c,s,ar;
	public:
		void getData()
		{
			cout<< "Enter length of all three sides: ";
			cin>> a>> b>> c;
		}
		float area();
		float perimeter();
		void printData()
		{
			cout<< "Area of the triangle is: "<< area();
			cout<< "\nPerimeter of the triangle is: "<< perimeter();		
		}		
};
float Triangle::area() 
{
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
float Triangle :: perimeter()
{
	return (a+b+c);
}
int main()
{
	Triangle t;
	t.getData();
	t.printData();
	return 0;
}

