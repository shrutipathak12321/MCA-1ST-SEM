#include<iostream>
using namespace std;
class Complex
{
	public:
		int real,imaginary;
		Complex() //no argument constructor
		{
			real=0;
			imaginary=0;
		}
		Complex(int r)  //one argument constructor
		{
			real=r;
			imaginary=0;
		}
		Complex(int r, int i)  //two arguments constructor
		{
			real=r;
			imaginary=i;
		}
		void Show()
		{
			cout<<real<<"+"<<imaginary<<"i\n";
		}
		void Sum(Complex c1,Complex c2)
		{
			Complex s;
			real=c1.real+c2.real;
			imaginary=c1.imaginary+c2.imaginary;
		}
};
int main()
{
	Complex c;
	Complex c1(3);
	Complex c2(9,5);
	Complex s;
	cout<<"Complex Number with no argument passing: ";
	c.Show();
	cout<<"Complex Number with one argument passing: ";
	c1.Show();
	cout<<"Complex Number with two argument passing: ";
	c2.Show();
	cout<<"\nComplex number 1: ";
	c1.Show();
	cout<<"Complex number 2: ";
	c2.Show();
	s.Sum(c1,c2);
	cout<<"\nSum of the two complex number= ";
	s.Show();

	return 0;	
}
